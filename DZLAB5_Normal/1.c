#include <stdio.h>
#include <locale.h>
//Made by Kailexi/Alexander Soldatov lmao
//https://github.com/Kailexi/C_DZ_Sem3

//Normal
//WARNING:

//У меня АНГЛИЙСКАЯ ВИНДА у меня в кодировке UTF-8 нету русского поэтому всё на английском
//В лабах выше 3 уже есть русский я пофиксил



int main() {
    setlocale(LC_ALL,"Russian");

    int n = 20;

    int matrix[20][20];


    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j || i + j == n - 1) {
                matrix[i][j] = 1; // Записываем 1 на главной и побочной диагоналях
            } else {
                matrix[i][j] = 0;
            }
        }
    }


    printf("Матрица 20x20:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
