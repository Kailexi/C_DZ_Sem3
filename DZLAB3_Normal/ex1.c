#include <stdio.h>

//Made by Kailexi/Alexander Soldatov lmao
//https://github.com/Kailexi/C_DZ_Sem3
//Menu

//WARNING:
//У меня АНГЛИЙСКАЯ ВИНДА у меня в кодировке UTF-8 нету русского поэтому всё на английском




int main(void)
{


    char name[50], surname[50];

    printf_s("Enter your name and surname:\n");
    scanf("%s %s", name, surname); // scanf_s в данном случае не сработает
    // так как он прекращает записывать информацию в переменные после пробела

    printf_s("Your surname is %s, %s", surname, name);

    return 0;

}