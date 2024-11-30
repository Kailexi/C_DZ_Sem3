#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <locale.h>
#include <time.h>

//Made by Kailexi/Alexander Soldatov lmao
//https://github.com/Kailexi/C_DZ_Sem3

//Normal
//WARNING:

//� ���� ���������� ����� � ���� � ��������� UTF-8 ���� �������� ������� �� �� ����������
//� ����� ���� 3 ��� ���� ������� � ��������




int* createMatrix(int M, int N) {
    const unsigned int MaxNumber = 100;
    int* matrix;
    int m, n;
    matrix = (int*)malloc(M * N * sizeof(int));
    if (matrix == NULL) return NULL;
    for (m = 0; m < M; m++) {
        for (n = 0; n < N; n++) {
            matrix[m * N + n] = rand() % MaxNumber - 10;  // �������� �� -10 �� 89
        }
    }
    return matrix;
}


void printMatrix(int* matrix, int M, int N) {
    int m, n;
    for (m = 0; m < M; m++) {
        for (n = 0; n < N; n++) {
            printf("%4d ", matrix[m * N + n]);
        }
        printf("\n");
    }
}

//��� �� ����� �������� ������ - ���� �������� �������� ��������

int kadane(int* arr, int n, int* start, int* end) {
    int max_sum = INT_MIN, current_sum = 0;
    *start = *end = -1;
    int temp_start = 0;

    for (int i = 0; i < n; i++) {
        current_sum += arr[i];
        if (current_sum > max_sum) {
            max_sum = current_sum;
            *start = temp_start;
            *end = i;
        }
        if (current_sum < 0) {
            current_sum = 0;
            temp_start = i + 1;
        }
    }

    // ��������� ������, ����� ��� �������� �������������
    if (*start == -1) {
        max_sum = arr[0];
        *start = *end = 0;
        for (int i = 1; i < n; i++) {
            if (arr[i] > max_sum) {
                max_sum = arr[i];
                *start = *end = i;
            }
        }
    }

    return max_sum;
}


void findMaxSumSubmatrix(int* matrix, int M, int N, int maxRows, int maxCols) {
    int max_sum = INT_MIN;
    int max_left = -1, max_right = -1, max_top = -1, max_bottom = -1;

    for (int left = 0; left < N; left++) {
        int temp[M];  // ��������� ������ ��� �������� ���� �� �������
        for (int i = 0; i < M; i++) {
            temp[i] = 0;
        }

        for (int right = left; right < N; right++) {
            for (int i = 0; i < M; i++) {
                temp[i] += matrix[i * N + right];
            }

            int start, end;
            int sum = kadane(temp, M, &start, &end);

            // ����������� �� ������ ����������
            if ((end - start + 1) <= maxRows && (right - left + 1) <= maxCols) {
                if (sum > max_sum) {
                    max_sum = sum;
                    max_left = left;
                    max_right = right;
                    max_top = start;
                    max_bottom = end;
                }
            }
        }
    }

    // ��������, ���� �� ������� ���������� �������
    if (max_left != -1 && max_right != -1 && max_top != -1 && max_bottom != -1) {
        printf("������������ �������:\n");
        printMatrix(matrix, M, N);

        // ������ ������ � ��������� ���������� � ������������ ������
        printf("\n������������ ����������� ����������:\n");
        printf("������: (%d to %d), �������: (%d to %d)\n", max_top, max_bottom, max_left, max_right);

        printf("\n���������� � ���������� ������ (�������� ����������� �� ������)):\n");
        for (int i = max_top; i <= max_bottom; i++) {
            for (int j = max_left; j <= max_right; j++) {
                printf("%4d ", matrix[i * N + j]);
            }
            printf("\n");
        }

        printf("\n����� ���� ��������� � ����������: %d\n", max_sum);
    } else {
        printf("\n� �� ����� ���������� ��� ���� ������������ ����� ������.\n");
    }
}

int main() {
    setlocale(LC_ALL, "Russian");

    srand(time(NULL));

    const int M = 10;
    const int N = 20;

    // ����������� �� ������� ���������� ������ ��� ����� ���� � ������ ���������� �?
    const int maxRows = 10;
    const int maxCols = 10;

    int* matrix = createMatrix(M, N);


    
    if (matrix) {
        findMaxSumSubmatrix(matrix, M, N, maxRows, maxCols);
        free(matrix);
    } else {
        printf("�������� � ������ �� �� ���� � �������.\n");
    }

    return 0;
}
