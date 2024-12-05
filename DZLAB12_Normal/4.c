#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>


void printArray(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}


void copyArray(int *src, int *dest, int size) {
    for (int i = 0; i < size; i++) {
        dest[i] = src[i];
    }
}

//сортировка вставками мне она понравилась поэтому почему бы и нет
void insertionSort(int *arr, int size) {
    for (int i = 1; i < size; i++) {
        int key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

// Бинарный поиск
int binarySearch(int *arr, int size, int target) {
    int left = 0, right = size - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target) {
            return mid;
        } else if (arr[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return -1; // Не найдено
}

int main() {
    const int SIZE = 100;
    int *arr = (int *)malloc(SIZE * sizeof(int));
    int *copy = (int *)malloc(SIZE * sizeof(int));

    setlocale(LC_ALL, "Russian");

    // Заполняем массив случайными числами
    srand(time(NULL));
    for (int i = 0; i < SIZE; i++) {
        arr[i] = rand() % 100; // Числа от 0 до 99
    }

    printf("Исходный массив:\n");
    printArray(arr, SIZE);


    copyArray(arr, copy, SIZE);

    // Сортируем копию массива
    insertionSort(copy, SIZE);

    printf("\nОтсортированный массив:\n");
    printArray(copy, SIZE);


    int target = 41; // Пример искомого числа
    int index = binarySearch(copy, SIZE, target);

    if (index != -1) {
        printf("\nЭлемент %d найден на индексе %d\n", target, index);
    } else {
        printf("\nЭлемент %d не найден\n", target);
    }


    free(arr);
    free(copy);

    return 0;
}
