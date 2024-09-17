#include <stdio.h>
#include <limits.h>
#include <float.h>
//Made by Kailexi/Alexander Soldatov
//https://github.com/Kailexi/C_DZ_Sem3
//Normal Solve

//WARNING:
//У меня АНГЛИЙСКАЯ ВИНДА у меня в кодировке UTF-8 нету русского поэтому всё на английском

int main(int argc, char **argv)
{
    //Limits.h ah classic

    printf_s("Max int value = %d\n", INT_MAX);

    printf_s("Max float val = %e\n", FLT_MAX);

    printf_s("Min float val = %e\n", FLT_MIN);

    // Overflow Error WOW Clion like I didn't know already
    printf_s("Int overflow: %d + 1 = %d\n", INT_MAX, INT_MAX + 1);

    printf_s("Float-point overflow: %e * 2 = %e\n", FLT_MAX, FLT_MAX * 2);

    printf_s("Float-point lowest point(underflow): %e / 2 = %e", FLT_MIN, FLT_MIN / 2);

}