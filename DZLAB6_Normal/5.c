#include <stdio.h>
#include <stdlib.h>
#include <locale.h>



void print_results(int* votes, int num_candidates) {
    printf("\nТекущие результаты голосования:\n");
    for (int i = 0; i < num_candidates; i++) {
        printf("Кандидат %d: %d голосов\n", i + 1, votes[i]);
    }
}

int main() {

    setlocale(LC_ALL,"Russian");

    int num_candidates;

    printf("Введите количество кандидатов: ");
    scanf("%d", &num_candidates);

    // Проверка на некорректный ввод
    if (num_candidates <= 0) {
        printf("Неверное количество кандидатов!\n");
        return 1;
    }


    // Выделение памяти для массива голосов
    int* votes = (int*)calloc(num_candidates, sizeof(int)); // Инициализация 0
    if (votes == NULL) {
        printf("Ошибка выделения памяти!\n");
        return 1;
    }

    int vote;
    while (1) {
        printf("\nВведите номер кандидата для голосования (от 1 до %d) или отрицательное число для завершения: ", num_candidates);
        scanf("%d", &vote);

        // Завершение программы при вводе отрицательного числа
        if (vote < 0) {
            break;
        }

        // Проверка, что номер кандидата валиден
        if (vote < 1 || vote > num_candidates) {
            printf("Некорректный номер кандидата! Попробуйте снова.\n");
        } else {
            // Увеличиваем счетчик голосов для выбранного кандидата
            votes[vote - 1]++;
            // Печать текущих результатов
            print_results(votes, num_candidates);
        }
    }

    free(votes);

    printf("Голосование завершено.\n");
    return 0;
}
