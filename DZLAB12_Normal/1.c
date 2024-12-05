#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

//Made by Kailexi/Alexander Soldatov lmao
//https://github.com/Kailexi/C_DZ_Sem3

//Normal
//WARNING:

//� ���� ���������� ����� � ���� � ��������� UTF-8 ���� �������� ������� �� �� ����������
//� ����� ���� 3 ��� ���� ������� � ��������



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



int main() {
    const int SIZE = 10000;

    int *arr = (int *)malloc(SIZE * sizeof(int));
    int *copy = (int *)malloc(SIZE * sizeof(int));

    srand(time(NULL));

    setlocale(LC_ALL,"Russian");

    // ��������� ������ ���������� ������� ������ �� �������
    for (int i = 0; i < SIZE; i++) {
        arr[i] = rand() % 10000;
    }


    printf("�������� ������:\n");
    printArray(arr,SIZE);


    // 5. ��������� �������
    clock_t start, end;


    copyArray(arr, copy, SIZE);
    start = clock();


    insertionSort(copy, SIZE);
    end = clock();

    printf("��������������� ������:\n");
    printArray(copy,SIZE);
    printf("����� ���������� ���������� ���������: %.5f ������\n", (double)(end - start) / CLOCKS_PER_SEC);


    free(arr);
    free(copy);

    return 0;
}