#include <stdio.h>
#include <locale.h>
//Made by Kailexi/Alexander Soldatov lmao
//https://github.com/Kailexi/C_DZ_Sem3

//Normal
//WARNING:

//� ���� ���������� ����� � ���� � ��������� UTF-8 ���� �������� ������� �� �� ����������
//� ����� ���� 3 ��� ���� ������� � ��������



int main() {
    setlocale(LC_ALL,"Russian");

    int n = 20;

    int matrix[20][20];


    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j || i + j == n - 1) {
                matrix[i][j] = 1; // ���������� 1 �� ������� � �������� ����������
            } else {
                matrix[i][j] = 0;
            }
        }
    }


    printf("������� 20x20:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
