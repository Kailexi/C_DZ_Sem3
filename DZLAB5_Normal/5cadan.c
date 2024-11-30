#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <locale.h>
#include <time.h>

//Made by Kailexi/Alexander Soldatov lmao
//https://github.com/Kailexi/C_DZ_Sem3

//Normal
//WARNING:

//У меня АНГЛИЙСКАЯ ВИНДА у меня в кодировке UTF-8 нету русского поэтому всё на английском
//В лабах выше 3 уже есть русский я пофиксил




int* createMatrix(int M, int N) {
    const unsigned int MaxNumber = 100;
    int* matrix;
    int m, n;
    matrix = (int*)malloc(M * N * sizeof(int));
    if (matrix == NULL) return NULL;
    for (m = 0; m < M; m++) {
        for (n = 0; n < N; n++) {
            matrix[m * N + n] = rand() % MaxNumber - 10;  // Значения от -10 до 89
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

//Кто не знает алгоритм кадана - ваши проблемы изучайте материал

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

    // Обработка случая, когда все элементы отрицательные
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
        int temp[M];  // Временный массив для хранения сумм по строкам
        for (int i = 0; i < M; i++) {
            temp[i] = 0;
        }

        for (int right = left; right < N; right++) {
            for (int i = 0; i < M; i++) {
                temp[i] += matrix[i * N + right];
            }

            int start, end;
            int sum = kadane(temp, M, &start, &end);

            // Ограничение на размер подматрицы
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

    // Проверка, были ли найдены правильные границы
    if (max_left != -1 && max_right != -1 && max_top != -1 && max_bottom != -1) {
        printf("Оригинальная матрица:\n");
        printMatrix(matrix, M, N);

        // Печать границ и элементов подматрицы с максимальной суммой
        printf("\nМаксимальное ограничение подматрицы:\n");
        printf("Строки: (%d to %d), Столбцы: (%d to %d)\n", max_top, max_bottom, max_left, max_right);

        printf("\nПодматрица с наибольшей суммой (учитывая ограничения на размер)):\n");
        for (int i = max_top; i <= max_bottom; i++) {
            for (int j = max_left; j <= max_right; j++) {
                printf("%4d ", matrix[i * N + j]);
            }
            printf("\n");
        }

        printf("\nСумма всех элементов в подматрице: %d\n", max_sum);
    } else {
        printf("\nЯ не нашёл подматрицу при этих ограничениях сорян братан.\n");
    }
}

int main() {
    setlocale(LC_ALL, "Russian");

    srand(time(NULL));

    const int M = 10;
    const int N = 20;

    // Ограничение на размеры подматрицы потому что можно было в задаче ограничить а?
    const int maxRows = 10;
    const int maxCols = 10;

    int* matrix = createMatrix(M, N);


    
    if (matrix) {
        findMaxSumSubmatrix(matrix, M, N, maxRows, maxCols);
        free(matrix);
    } else {
        printf("Проблемы с башкой ой то есть с памятью.\n");
    }

    return 0;
}
