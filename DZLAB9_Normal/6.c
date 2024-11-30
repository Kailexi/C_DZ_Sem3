#include <stdio.h>
#include <locale.h>


//Made by Kailexi/Alexander Soldatov lmao
//https://github.com/Kailexi/C_DZ_Sem3

//Normal
//WARNING:

//У меня АНГЛИЙСКАЯ ВИНДА у меня в кодировке UTF-8 нету русского поэтому всё на английском
//В лабах выше 3 уже есть русский я пофиксил


typedef int (*Operation)(int, int);

int add(int a, int b) {
    return a + b;
}

int multiply(int a, int b) {
    return a * b;
}

int main() {


    setlocale(LC_ALL,"Russian");

    int a, b;

    printf("Введите два числа: ");
    scanf("%d %d", &a, &b);

    Operation op_add = add;
    Operation op_multiply = multiply;

    printf("Сумма: %d\n", op_add(a, b));
    printf("Произведение: %d\n", op_multiply(a, b));

    return 0;
}
