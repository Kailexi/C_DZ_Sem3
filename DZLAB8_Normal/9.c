#include <stdio.h>
#include <locale.h>

void hanoi(int n, char from, char to, char aux) {
    if (n == 1) {
        // Базовый случай: один диск
        printf("Переместите диск 1 с %c на %c\n", from, to);
        return;
    }

    // Перемещаем n-1 дисков с начального стержня на вспомогательный
    hanoi(n - 1, from, aux, to);

    // Перемещаем самый большой диск с начального стержня на целевой
    printf("Переместите диск %d с %c на %c\n", n, from, to);

    // Перемещаем n-1 дисков с вспомогательного стержня на целевой
    hanoi(n - 1, aux, to, from);
}

int main() {

    setlocale(LC_ALL,"Russian");


    int n;


    printf("Введите количество дисков: ");
    scanf("%d", &n);


    if (n <= 0) {
        printf("Ошибка: количество дисков должно быть больше 0.\n");
        return 1;
    }


    printf("Решение для %d дисков:\n", n);
    hanoi(n, 'A', 'C', 'B');

    return 0;
}
