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
    double years, seconds;
    printf("Your age:\n");
    scanf_s("%lf", &years); // scanf_s >> scan_f меньше шанс на проблемы с адресами

    seconds = years * 3.156e7; // e notion fuck pow and <math.h> optimization BABYYYYY

    printf("You have lived already more than %lf seconds", seconds);

    //кто сидит в визуалке вам бы в конце всех задач бы getchar() делать
    //а могли просто скачать CLION...
    //страдайте так сказать



}