#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

//Made by Kailexi/Alexander Soldatov lmao
//https://github.com/Kailexi/C_DZ_Sem3

//Normal
//WARNING:

//У меня АНГЛИЙСКАЯ ВИНДА у меня в кодировке UTF-8 нету русского поэтому всё на английском
//В лабах выше 3 уже есть русский я пофиксил



int main() {

    setlocale(LC_ALL,"Russian");

    int rows = 10;
    int cols = 20;
    int matrix[10][20];
    int transposed[20][10];



    srand(time(NULL));

    // Заполняем матрицу случайными числами от 1 до 100 и выводим её
    printf("Исходная матрица 10x20:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            matrix[i][j] = rand() % 100 + 1;
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    // Транспонируем матрицу
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            transposed[j][i] = matrix[i][j]; // Элементы матрицы меняются местами
        }
    }


    printf("\nТранспонированная матрица 20x10:\n");
    for (int i = 0; i < cols; i++) {
        for (int j = 0; j < rows; j++) {
            printf("%d ", transposed[i][j]);
        }
        printf("\n");
    }

    return 0;
}
