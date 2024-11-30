#include <stdio.h>
#include <string.h>
//Made by Kailexi/Alexander Soldatov lmao
//https://github.com/Kailexi/C_DZ_Sem3
//Normal

//WARNING:
//У меня АНГЛИЙСКАЯ ВИНДА у меня в кодировке UTF-8 нету русского поэтому всё на английском




int main()
{


    char name[100];

    printf_s("Enter your name:\n");
    scanf_s("%s", name); // Double quotation marks lmaooo

    printf_s("\"%s\"\n", name);

    printf_s("\"%20s\"\n", name); // 20 - width from right

    printf_s("\"%-20s\"\n", name);// 20 - width from left

    printf_s("%*s", strlen(name) + 3, name);// string length + 3 width

    return 0;

}