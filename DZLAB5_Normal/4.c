#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

//Made by Kailexi/Alexander Soldatov lmao
//https://github.com/Kailexi/C_DZ_Sem3

//Normal
//WARNING:

//� ���� ���������� ����� � ���� � ��������� UTF-8 ���� �������� ������� �� �� ����������
//� ����� ���� 3 ��� ���� ������� � ��������



int main() {

    setlocale(LC_ALL,"Russian");

    int rows = 10;
    int cols = 20;
    int matrix[10][20];
    int transposed[20][10];



    srand(time(NULL));

    // ��������� ������� ���������� ������� �� 1 �� 100 � ������� �
    printf("�������� ������� 10x20:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            matrix[i][j] = rand() % 100 + 1;
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    // ������������� �������
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            transposed[j][i] = matrix[i][j]; // �������� ������� �������� �������
        }
    }


    printf("\n����������������� ������� 20x10:\n");
    for (int i = 0; i < cols; i++) {
        for (int j = 0; j < rows; j++) {
            printf("%d ", transposed[i][j]);
        }
        printf("\n");
    }

    return 0;
}
