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
    double almost_litres, grams, molecules;
    printf("How much water do you drink daily (in quarts just short of a litre):\n");
    scanf_s("%lf", &almost_litres); // why quarts, we are Russian we drink litres of vodka lmao...

    grams = almost_litres * 950;
    molecules = grams / 3.0e-23; // no pow, only math notation is the GOAT

    printf("You consume daily %e water molecules", molecules);



}