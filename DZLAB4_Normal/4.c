#include <stdio.h>
#include <locale.h>

//Made by Kailexi/Alexander Soldatov lmao
//https://github.com/Kailexi/C_DZ_Sem3

//Normal
//WARNING:

//� ���� ���������� ����� � ���� � ��������� UTF-8 ���� �������� ������� �� �� ����������
//� ����� ���� 3 ��� ���� ������� � ��������




//������ � ���������� ��� ���������� �� ������ ��� ����� �� ������� ��� ������ ���������
void bubble_sort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) { // ������� ���� (�������)
        for (int j = 0; j < n - i - 1; j++) { // ���������� ���� (��������� ���������)
            if (arr[j] > arr[j + 1]) { // ���� �������� � ������������ �������
                // �� ������ �� ������� ������ � ���������� ������ ����� ��� ��� ������
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {

    setlocale(LC_ALL,"Russian");

    int arr[] = {5, 2, 8, 3, 1, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("�������� ������: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    bubble_sort(arr, n);

    printf("��������������� ������: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
