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


    setlocale(LC_ALL,"Russian");


    int N, M;


    printf("������� ���������� ����� (N): ");
    scanf("%d", &N);
    printf("������� ���������� �������� (M): ");
    scanf("%d", &M);

    // ����������� �������� ������ ��� ������� N x M
    int **matrix = (int**)malloc(N * sizeof(int*));
    if (matrix == NULL) {
        printf("������ ��������� ������ ��� ����� �������!\n");
        return 1;
    }

    for (int i = 0; i < N; i++) {
        matrix[i] = (int*)malloc(M * sizeof(int));
        if (matrix[i] == NULL) {
            printf("������ ��������� ������ ��� �������� �������!\n");
            return 1;
        }
    }

    // ������������� ���������� ��������� �����
    srand(time(0)); // ���������� ������� ����� ��� ��������� ��������� ����� ��� ������-������


    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            matrix[i][j] = rand() % 100;
        }
    }


    printf("\n�������:\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            printf("%4d ", matrix[i][j]);
        }
        printf("\n");
    }


    for (int i = 0; i < N; i++) {
        free(matrix[i]);
    }
    free(matrix);

    return 0;
}
