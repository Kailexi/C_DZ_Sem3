#include <stdio.h>
#include <locale.h>

//Made by Kailexi/Alexander Soldatov lmao
//https://github.com/Kailexi/C_DZ_Sem3

//Normal
//WARNING:

//У меня АНГЛИЙСКАЯ ВИНДА у меня в кодировке UTF-8 нету русского поэтому всё на английском
//В лабах выше 3 уже есть русский я пофиксил




int sum_of_digits(int n) {
    if (n == 0) {
        return 0;  // Базовый случай: сумма цифр числа 0 равна 0
    } else {
        return (n % 10) + sum_of_digits(n / 10);  // Суммируем последнюю цифру и рекурсивно вычисляем для оставшейся части числа
    }
}

int main() {

    setlocale(LC_ALL,"Russian");

    int n;


    printf("Введите число: ");
    scanf("%d", &n);


    printf("Сумма цифр числа %d равна: %d\n", n, sum_of_digits(n));

    return 0;
}
