#include <stdio.h>
#include <locale.h>

//Made by Kailexi/Alexander Soldatov lmao
//https://github.com/Kailexi/C_DZ_Sem3

//Normal
//WARNING:

//У меня АНГЛИЙСКАЯ ВИНДА у меня в кодировке UTF-8 нету русского поэтому всё на английском
//В лабах выше 3 уже есть русский я пофиксил



int power(int x, int n) {
    // Базовый случай: x^0 = 1
    if (n == 0) {
        return 1;
    }
    // Рекурсивный случай: x^n = x * x^(n-1)
    return x * power(x, n - 1);
}

int main() {


    setlocale(LC_ALL,"Russian");
    int x, n;



    printf("Введите основание x (0 <= x <= 10): ");
    scanf("%d", &x);
    printf("Введите степень n (0 <= n <= 10): ");
    scanf("%d", &n);


    printf("Результат: %d^%d = %d\n", x, n, power(x, n));

    return 0;
}


