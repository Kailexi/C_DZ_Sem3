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
    double height_cm, height_inches; // again we are russian inches a for Americans
    const double cm_to_inch = 2.54; // je ne veux pas faire cet exercice
    //I'm definitely 6 foot i promise

    printf("Your height in cm:\n");
    scanf_s("%lf", &height_cm);

    height_inches = height_cm / cm_to_inch;

    printf("Your height in inches is %lf", height_inches);



}