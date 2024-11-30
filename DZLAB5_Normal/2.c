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

    setlocale(LC_ALL, "Russian");


    int rows = 10;
    int cols = 20;
    int matrix[10][20];
    int sum = 0;


    srand(time(NULL)); // Инициализация генератора случайных чисел чтобы каждую компиляцию разные числа

    // Заполняем матрицу случайными числами от 1 до 100 и выводим её
    printf("Матрица 10x20:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            matrix[i][j] = rand() % 100 + 1;
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    // Находим сумму максимальных элементов в каждой строке
    for (int i = 0; i < rows; i++) {
        int max = matrix[i][0]; // Предполагаем, что первый элемент строки максимальный
        for (int j = 1; j < cols; j++) {
            if (matrix[i][j] > max) {
                max = matrix[i][j]; // Обновляем максимальное значение
            }
        }
        sum += max; // Добавляем максимальный элемент строки к общей сумме
    }

    printf("\nСумма максимальных элементов из каждой строки: %d\n", sum);

    return 0;
}
