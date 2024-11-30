#include <stdio.h>
#include <string.h>
//Made by Kailexi/Alexander Soldatov lmao
//https://github.com/Kailexi/C_DZ_Sem3

//Normal
//WARNING:

//У меня АНГЛИЙСКАЯ ВИНДА у меня в кодировке UTF-8 нету русского поэтому всё на английском
//В лабах выше 3 уже есть русский я пофиксил

int main()
{

    char name[100], surname[100];

    printf_s("Enter your name:\n");
    scanf_s("%s", &name);

    printf_s("Enter your surname:\n");
    scanf_s("%s", &surname);

    printf_s("%s %s\n", name, surname);


    printf_s("%*d %*d\n", strlen(name), strlen(name),
             strlen(surname), strlen(surname));

    return 0;

}




