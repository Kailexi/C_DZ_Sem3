#include <stdio.h>
#include <locale.h>

//Made by Kailexi/Alexander Soldatov lmao
//https://github.com/Kailexi/C_DZ_Sem3

//Normal
//WARNING:

//У меня АНГЛИЙСКАЯ ВИНДА у меня в кодировке UTF-8 нету русского поэтому всё на английском
//В лабах выше 3 уже есть русский я пофиксил




int factorial(int n) {
    if (n == 0) {
        return 1; // Базовый случай: 0! = 1
    } else {
        return n * factorial(n - 1); // Рекурсивный вызов
    }
}


int main() {

    setlocale(LC_ALL,"Russian");

    int n;

    printf("Введите число n (0 <= n <= 12): ");
    scanf("%d", &n);


    if (n < 0 || n > 12) {
        printf("Число должно быть в пределах от 0 до 12.\n");
        return 1;
    }


    printf("Факториал числа %d равен: %d\n", n, factorial(n));

    return 0;
}
