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


int main() {

    setlocale(LC_ALL, "Russian");


    int rows = 10;
    int cols = 20;
    int matrix[10][20];
    int sum = 0;


    srand(time(NULL)); // ������������� ���������� ��������� ����� ����� ������ ���������� ������ �����

    // ��������� ������� ���������� ������� �� 1 �� 100 � ������� �
    printf("������� 10x20:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            matrix[i][j] = rand() % 100 + 1;
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    // ������� ����� ������������ ��������� � ������ ������
    for (int i = 0; i < rows; i++) {
        int max = matrix[i][0]; // ������������, ��� ������ ������� ������ ������������
        for (int j = 1; j < cols; j++) {
            if (matrix[i][j] > max) {
                max = matrix[i][j]; // ��������� ������������ ��������
            }
        }
        sum += max; // ��������� ������������ ������� ������ � ����� �����
    }

    printf("\n����� ������������ ��������� �� ������ ������: %d\n", sum);

    return 0;
}
