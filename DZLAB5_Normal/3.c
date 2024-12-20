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
    int max_sum = -1; // ������������ ����� �����, ������� ����� ���� ������������� ���������
    int row_with_max_sum = -1; // ����� ������ � ������������ ������


    srand(time(NULL));

    // ��������� ������� ���������� ������� �� -10 �� 100 � ������� �
    printf("������� 10x20:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            matrix[i][j] = rand() % 111 - 10;
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    // ����� ������ � ������������ ������, ���� � ������ ������ ���� ������������� ���������
    for (int i = 0; i < rows; i++) {
        int positive_count = 0; // ���������� ������������� ��������� � ������
        int row_sum = 0; // ����� ��������� ������

        for (int j = 0; j < cols; j++) {
            row_sum += matrix[i][j]; // ��������� �������� ������
            if (matrix[i][j] > 0) {
                positive_count++; // ���� ������� �������������, ����������� �������
            }
        }

        // ���� � ������ ������ ���� ������������� ���������
        if (positive_count > 2) {
            if (row_sum > max_sum) {
                max_sum = row_sum; // ��������� ������������ �����
                row_with_max_sum = i; // ���������� ����� ������
            }
        }
    }




    if (row_with_max_sum != -1) {
        printf("\n����� ������ � ������������ ������: %d\n", row_with_max_sum + 1); // ������ ����� � 1
        printf("����� ��������� ���� ������: %d\n", max_sum);
    } else {
        printf("\n��� ����� � ����� ��� ����� �������������� ����������.\n");
    }

    return 0;
}
