#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

//Made by Kailexi/Alexander Soldatov lmao
//https://github.com/Kailexi/C_DZ_Sem3

//Normal
//WARNING:

//У меня АНГЛИЙСКАЯ ВИНДА у меня в кодировке UTF-8 нету русского поэтому всё на английском
//В лабах выше 3 уже есть русский я пофиксил





int main() {


    setlocale(LC_ALL,"Russian");


    int N, M;


    printf("Введите количество строк (N): ");
    scanf("%d", &N);
    printf("Введите количество столбцов (M): ");
    scanf("%d", &M);

    // Динамически выделить память для матрицы N x M
    int **matrix = (int**)malloc(N * sizeof(int*));
    if (matrix == NULL) {
        printf("Ошибка выделения памяти для строк матрицы!\n");
        return 1;
    }

    for (int i = 0; i < N; i++) {
        matrix[i] = (int*)malloc(M * sizeof(int));
        if (matrix[i] == NULL) {
            printf("Ошибка выделения памяти для столбцов матрицы!\n");
            return 1;
        }
    }

    // Инициализация генератора случайных чисел
    srand(time(0)); // Используем текущее время для генерации случайных чисел раз псевдо-рандом


    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            matrix[i][j] = rand() % 100;
        }
    }


    printf("\nМатрица:\n");
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
