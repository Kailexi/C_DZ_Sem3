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
    int max_sum = -1; // Максимальная сумма строк, имеющих более двух положительных элементов
    int row_with_max_sum = -1; // Номер строки с максимальной суммой

    srand(time(NULL));

    // Заполняем матрицу случайными числами от -10 до 100 и выводим её
    printf("Матрица 10x20:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            matrix[i][j] = rand() % 111 - 10;
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    // Поиск строки с максимальной суммой, если в строке больше двух положительных элементов
    for (int i = 0; i < rows; i++) {
        int positive_count = 0; // Количество положительных элементов в строке
        int row_sum = 0; // Сумма элементов строки

        for (int j = 0; j < cols; j++) {
            row_sum += matrix[i][j]; // Суммируем элементы строки
            if (matrix[i][j] > 0) {
                positive_count++; // Если элемент положительный, увеличиваем счетчик
            }
        }

        // Если в строке больше двух положительных элементов
        if (positive_count > 2) {
            if (row_sum > max_sum) {
                max_sum = row_sum; // Обновляем максимальную сумму
                row_with_max_sum = i; // Запоминаем номер строки
            }
        }
    }




    if (row_with_max_sum != -1) {
        printf("\nНомер строки с максимальной суммой: %d\n", row_with_max_sum + 1); // Номера строк с 1
        printf("Сумма элементов этой строки: %d\n", max_sum);
    } else {
        printf("\nНет строк с более чем двумя положительными элементами.\n");
    }

    return 0;
}
