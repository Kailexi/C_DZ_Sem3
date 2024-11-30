#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

//Made by Kailexi/Alexander Soldatov lmao
//https://github.com/Kailexi/C_DZ_Sem3

//Normal
//WARNING:

//� ���� ���������� ����� � ���� � ��������� UTF-8 ���� �������� ������� �� �� ����������
//� ����� ���� 3 ��� ���� ������� � ��������




int main() {



    setlocale(LC_ALL,"Russian");


    srand(time(0));

    int N1, M1, N2, M2;


    printf("������� ���������� ����� ������ �������: ");
    scanf("%d", &N1);
    printf("������� ���������� �������� ������ �������: ");
    scanf("%d", &M1);


    printf("������� ���������� ����� ������ �������: ");
    scanf("%d", &N2);
    printf("������� ���������� �������� ������ �������: ");
    scanf("%d", &M2);

    // ��������, ����� �� �������� �������
    if (M1 != N2) {
        printf("������: ���������� �������� ������ ������� �� ����� ���������� ����� ������ �������. ��������� ����������.\n");
        return 1;
    }


    int **matrix1 = (int**)malloc(N1 * sizeof(int*));
    for (int i = 0; i < N1; i++) {
        matrix1[i] = (int*)malloc(M1 * sizeof(int));
    }


    int **matrix2 = (int**)malloc(N2 * sizeof(int*));
    for (int i = 0; i < N2; i++) {
        matrix2[i] = (int*)malloc(M2 * sizeof(int));
    }


    int **result = (int**)malloc(N1 * sizeof(int*));
    for (int i = 0; i < N1; i++) {
        result[i] = (int*)malloc(M2 * sizeof(int));
    }


    printf("\n���������� ������ �������:\n");
    for (int i = 0; i < N1; i++) {
        for (int j = 0; j < M1; j++) {
            matrix1[i][j] = rand() % 10; // ���������� ���������� ������� �� 0 �� 9
        }
    }


    printf("\n���������� ������ �������:\n");
    for (int i = 0; i < N2; i++) {
        for (int j = 0; j < M2; j++) {
            matrix2[i][j] = rand() % 10; // ���������� ���������� ������� �� 0 �� 9
        }
    }

    // ��������� ������
    for (int i = 0; i < N1; i++) {
        for (int j = 0; j < M2; j++) {
            result[i][j] = 0;
            for (int k = 0; k < M1; k++) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }


    printf("\n������ �������:\n");
    for (int i = 0; i < N1; i++) {
        for (int j = 0; j < M1; j++) {
            printf("%4d ", matrix1[i][j]);
        }
        printf("\n");
    }


    printf("\n������ �������:\n");
    for (int i = 0; i < N2; i++) {
        for (int j = 0; j < M2; j++) {
            printf("%4d ", matrix2[i][j]);
        }
        printf("\n");
    }


    printf("\n��������� ��������� ������:\n");
    for (int i = 0; i < N1; i++) {
        for (int j = 0; j < M2; j++) {
            printf("%4d ", result[i][j]);
        }
        printf("\n");
    }

    // ������������ ������
    for (int i = 0; i < N1; i++) {
        free(matrix1[i]);
    }
    for (int i = 0; i < N2; i++) {
        free(matrix2[i]);
    }
    for (int i = 0; i < N1; i++) {
        free(result[i]);
    }
    free(matrix1);
    free(matrix2);
    free(result);

    return 0;
}
