#include <stdio.h>
#include <locale.h>

//Made by Kailexi/Alexander Soldatov lmao
//https://github.com/Kailexi/C_DZ_Sem3

//Normal
//WARNING:

//� ���� ���������� ����� � ���� � ��������� UTF-8 ���� �������� ������� �� �� ����������
//� ����� ���� 3 ��� ���� ������� � �������� ����� ������� ����




void reverse_array(int arr[], int n) {
    int temp;
    for (int i = 0; i < n / 2; i++) {
        // ������ ������� �������� arr[i] � arr[n - i - 1]
        temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }
}

int main() {

    setlocale(LC_ALL,"Russian"); // ������ � ���� CLION ��� ���� ����� �� ����� ������� ���� ���������

    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("�������� ������: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    reverse_array(arr, n); // ����������� ������

    printf("��������������� ������: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
