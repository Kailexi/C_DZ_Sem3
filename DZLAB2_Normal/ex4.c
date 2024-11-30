#include <stdio.h>
#include <limits.h>
#include <float.h>
//Made by Kailexi/Alexander Soldatov lmao
//https://github.com/Kailexi/C_DZ_Sem3
//Normal Solve

//WARNING:
//У меня АНГЛИЙСКАЯ ВИНДА у меня в кодировке UTF-8 нету русского поэтому всё на английском



int main(int argc, char **argv)
{
    double number;

    // Используем стандартную функцию printf
    printf("Enter float value: ");
    // Используем корректный формат для scanf
    scanf("%lf", &number);

    // Выводим число в разных форматах
    printf("Fixed-point: %lf\n", number);  // Обычный вывод числа с плавающей точкой
    printf("Exponential: %e\n", number);   // Экспоненциальная форма
    printf("P notation: %a\n", number);    // П-нотация (hexadecimal floating point)

    return 0;
}
