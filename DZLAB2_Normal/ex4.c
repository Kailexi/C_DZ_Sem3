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

    printf_s("Enter float value: ");
    scanf_s("%;f", &number);


    printf_s("Fixed-point: %lf\n", number);
    printf_s("Exponential: %e\n", number);
    printf_s("P notation: %a\n", number); // Не всегда работает
    // смотрите как у вас там компилятор бряхнет



}