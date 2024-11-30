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
    double cups, pints, ounces, tablespoons, teaspoons;
    //ok, ok, LET HIM COOK
    //ok I'm done CLION autocorrects my commas in comments?

    printf("Enter number of cups:\n");
    scanf_s("%lf", &cups);

    pints = cups / 2; ounces = cups * 8;

    tablespoons = ounces * 2;
    teaspoons = tablespoons * 3;



    printf("%.2lf cups = %.2f pints\n", cups, pints);

    printf("%.2lf cups = %.2f ounces\n", cups, ounces);

    printf("%.2lf cups = %.2f tablespoons\n", cups, tablespoons);

    printf("%.2lf cups = %.2f teaspoons", cups, teaspoons);




}