#include <stdio.h>
#include <locale.h>

//Made by Kailexi/Alexander Soldatov lmao
//https://github.com/Kailexi/C_DZ_Sem3

//Normal
//WARNING:

//У меня АНГЛИЙСКАЯ ВИНДА у меня в кодировке UTF-8 нету русского поэтому всё на английском
//В лабах выше 3 уже есть русский я пофиксил




int count_digits(int n) {
    // Базовый случай: если число меньше 10, то оно состоит из одной цифры
    if (n < 10) {
        return 1;
    }
    // Рекурсивный случай: делим число на 10 и увеличиваем счетчик
    return 1 + count_digits(n / 10);
}

int main() {

    setlocale(LC_ALL,"Russian");

    int n;


    printf("Введите число: ");
    scanf("%d", &n);


    printf("Количество цифр в числе: %d\n", count_digits(n));

    return 0;
}
