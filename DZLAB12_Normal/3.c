#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

//Made by Kailexi/Alexander Soldatov lmao
//https://github.com/Kailexi/C_DZ_Sem3

//Normal
//WARNING:

//У меня АНГЛИЙСКАЯ ВИНДА у меня в кодировке UTF-8 нету русского поэтому всё на английском
//В лабах выше 3 уже есть русский я пофиксил




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


void quickSort(int *arr, int low, int high) {
    if (low < high) {
        int pivot = arr[high];
        int i = (low - 1);

        for (int j = low; j <= high - 1; j++) {
            if (arr[j] <= pivot) {
                i++;
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
        int temp = arr[i + 1];
        arr[i + 1] = arr[high];
        arr[high] = temp;

        int pi = i + 1;

        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}



int main() {

    const int SIZE = 100;

    int *arr = (int *)malloc(SIZE * sizeof(int));
    int *copy = (int *)malloc(SIZE * sizeof(int));


    setlocale(LC_ALL,"Russian");
    srand(time(NULL));



    // Заполняем массив случайными числами чисто по приколу
    for (int i = 0; i < SIZE; i++) {
        arr[i] = rand() % 10000;
    }

    printf("Исходный массив:\n");
    printArray(arr,SIZE);

    // 5. Измерение времени
    clock_t start, end;


    // Быстрая сортировка
    copyArray(arr, copy, SIZE);
    start = clock();

    quickSort(copy, 0, SIZE - 1);
    end = clock();

    printf("Отсортированный массив:\n");
    printArray(copy,SIZE);
    printf("Время выполнения быстрой сортировки: %.5f секунд\n", (double)(end - start) / CLOCKS_PER_SEC);



    free(arr);
    free(copy);

    return 0;
}