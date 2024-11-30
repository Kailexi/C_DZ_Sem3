#include <stdio.h>
//Made by Kailexi/Alexander Soldatov lmao
//https://github.com/Kailexi/C_DZ_Sem3
//Normal

//WARNING:
//У меня АНГЛИЙСКАЯ ВИНДА у меня в кодировке UTF-8 нету русского поэтому всё на английском

//Мы русские какие дюймы только метры и сантиметры


int main()
{

    float cm, meters;
    char name[100];

    printf_s("Enter your name:\n");
    scanf_s("%s", &name);


    printf_s("Enter your height in cm:\n");
    scanf_s("%f", &cm);

    meters = cm / 100;

    printf_s("%s, you height is %.2f meters", name, meters);

    return 0;

}









