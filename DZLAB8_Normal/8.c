#include <stdio.h>
#include <locale.h>
//Made by Kailexi/Alexander Soldatov lmao

//https://github.com/Kailexi/C_DZ_Sem3
//Normal

//WARNING:
//� ���� ���������� ����� � ���� � ��������� UTF-8 ���� �������� ������� �� �� ����������
//� ����� ���� 3 ��� ���� ������� � ��������
// ����������� ������� ��� ���������� ����� ��������� �������
int sumArray(int arr[], int n) {
    // ������� ������: ���� ����� ������� ����� 0, ����� ����� 0
    if (n == 0) {
        return 0;
    }
    // ����������� ������: ������� ������� + ����� ���������� ���������
    return arr[n - 1] + sumArray(arr, n - 1);
}

int main() {

    setlocale(LC_ALL,"Russian");

    int m;


    printf("������� ���������� ��������� ������� (1 < m  < 100): ");
    scanf("%d", &m);

    // �������� ������������ ������� �������
    if (m < 1 || m > 100) {
        printf("������: ���������� ��������� ������ ���� � ��������� �� 1 �� 100.\n");
        return 1;
    }

    int arr[m]; // ������ ������ m

    printf("������� �������� �������: ");
    for (int i = 0; i < m; i++) {
        scanf("%d", &arr[i]);
    }


    int sum = sumArray(arr, m);


    printf("����� ��������� �������: %d\n", sum);

    return 0;
}
