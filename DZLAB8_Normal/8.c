#include <stdio.h>
#include <locale.h>

//Made by Kailexi/Alexander Soldatov lmao
//https://github.com/Kailexi/C_DZ_Sem3

//Normal
//WARNING:

//� ���� ���������� ����� � ���� � ��������� UTF-8 ���� �������� ������� �� �� ����������
//� ����� ���� 3 ��� ���� ������� � ��������



int sum_array(int arr[], int m) {
    // ������� ������: ���� ���� ������� � �������
    if (m == 1) {
        return arr[0];
    }
    // ����������� ������: ����� ������� �������� � ����� ��������� ���������
    return arr[0] + sum_array(arr + 1, m - 1);
}

int main() {

    setlocale(LC_ALL,"Russian");

    int m;



    printf("������� ���������� ��������� � ������� (1 <= m <= 100): ");
    scanf("%d", &m);

    int arr[m];  // ������ ������ m


    printf("������� �������� �������:\n");
    for (int i = 0; i < m; i++) {
        scanf("%d", &arr[i]);
    }


    printf("����� ��������� �������: %d\n", sum_array(arr, m));

    return 0;
}
