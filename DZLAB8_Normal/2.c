#include <stdio.h>
#include <locale.h>

//Made by Kailexi/Alexander Soldatov lmao
//https://github.com/Kailexi/C_DZ_Sem3

//Normal
//WARNING:

//У меня АНГЛИЙСКАЯ ВИНДА у меня в кодировке UTF-8 нету русского поэтому всё на английском
//В лабах выше 3 уже есть русский я пофиксил




int fibonacci(int n) {
    if (n == 0) {
        return 0; // Базовый случай: F(0) = 0
    } else if (n == 1) {
        return 1; // Базовый случай: F(1) = 1
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2); // Рекурсивный случай
    }
}

int main() {

    setlocale(LC_ALL,"Russian");


    int n;


    printf("Введите индекс n (0 <= n <= 30): ");
    scanf("%d", &n);


    if (n < 0 || n > 30) {
        printf("Индекс должен быть в пределах от 0 до 30.\n");
        return 1;
    }


    printf("Число Фибоначчи с индексом %d равно: %d\n", n, fibonacci(n));

    return 0;
}
