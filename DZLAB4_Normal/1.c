#include <stdio.h>
#include <locale.h>
//Made by Kailexi/Alexander Soldatov lmao
//https://github.com/Kailexi/C_DZ_Sem3

//Normal
//WARNING:

//� ���� ���������� ����� � ���� � ��������� UTF-8 ���� �������� ������� �� �� ����������
//� ����� ���� 3 ��� ���� ������� � ��������




void copy_array(int n, int src[], int dest[]) {
    for (int i = 0; i < n; i++) {
        dest[i] = src[i];
    }
}

int main() {

    setlocale(LC_ALL,"Russian");

    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[5]; // ������ ������� ������ ���� ����� ������� ��������� ������� � �� ��������� �������� ����������
    int n = sizeof(arr1) / sizeof(arr1[0]);


    printf("�������� ������: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr1[i]);
    }
    printf("\n");

    copy_array(n, arr1, arr2);

    printf("����� �������: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr2[i]);
    }
    printf("\n");

    return 0;
}

