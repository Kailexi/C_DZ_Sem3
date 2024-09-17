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
    int ascii_number; // Никаких char, только int, тут может быть accessed restricted memory
    // или по другому 0xc0000005 error

    printf_s("Enter ASCII code:\n");
    scanf_s("%d", &ascii_number);

    printf_s("ASCII code for %d is %c", ascii_number, ascii_number); //Спасибо C, за удобство


}