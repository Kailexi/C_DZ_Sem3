#include <stdio.h>
#include <locale.h>

//Made by Kailexi/Alexander Soldatov lmao
//https://github.com/Kailexi/C_DZ_Sem3

//Normal
//WARNING:

//� ���� ���������� ����� � ���� � ��������� UTF-8 ���� �������� ������� �� �� ����������
//� ����� ���� 3 ��� ���� ������� � ��������



#define SIZE 6 // ������������ ������ �������


void insert_element(int arr[], int *n, int index, int value) {
    if (*n >= SIZE) {
        printf("������: ������ ����������, ���������� �������� �������.\n");
        return;
    }
    for (int i = *n; i > index; i--) {
        arr[i] = arr[i - 1];
    }
    arr[index] = value; // ��������� ������� ������ ��� ������ ���
    (*n)++;
}


void delete_element(int arr[], int *n, int index) {
    if (*n <= 0) {
        printf("������: ������ ����, ���������� ������� �������.\n");
        return;
    }
    for (int i = index; i < *n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    (*n)--;
}


int main() {

    setlocale(LC_ALL,"Russian");

    int arr[SIZE] = {1, 2, 3, 4, 5}; // ������������, ��� ������ ������� ������� � ������� ��������� �� ��?
    int n = 5;

    printf("�������� ������: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    insert_element(arr, &n, 2, 10); // ��������� �������� 10 �� ������ 2 �������� ����� � �� ������� ���� �����
    printf("������ ����� �������: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    delete_element(arr, &n, 2); // ������� ������� �� ������� 2 ��� ��� ������ ��� �� ������ ��?
    printf("������ ����� ��������: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}