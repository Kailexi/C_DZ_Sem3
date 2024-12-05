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

//���������� ��������� ��� ��� ����������� ������� ������ �� � ���
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

// �������� �����
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
    return -1; // �� �������
}

int main() {
    const int SIZE = 100;
    int *arr = (int *)malloc(SIZE * sizeof(int));
    int *copy = (int *)malloc(SIZE * sizeof(int));

    setlocale(LC_ALL, "Russian");

    // ��������� ������ ���������� �������
    srand(time(NULL));
    for (int i = 0; i < SIZE; i++) {
        arr[i] = rand() % 100; // ����� �� 0 �� 99
    }

    printf("�������� ������:\n");
    printArray(arr, SIZE);


    copyArray(arr, copy, SIZE);

    // ��������� ����� �������
    insertionSort(copy, SIZE);

    printf("\n��������������� ������:\n");
    printArray(copy, SIZE);


    int target = 41; // ������ �������� �����
    int index = binarySearch(copy, SIZE, target);

    if (index != -1) {
        printf("\n������� %d ������ �� ������� %d\n", target, index);
    } else {
        printf("\n������� %d �� ������\n", target);
    }


    free(arr);
    free(copy);

    return 0;
}
