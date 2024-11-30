#include <stdio.h>
#include <string.h>
#include <locale.h>

//Made by Kailexi/Alexander Soldatov lmao
//https://github.com/Kailexi/C_DZ_Sem3

//Normal
//WARNING:

//У меня АНГЛИЙСКАЯ ВИНДА у меня в кодировке UTF-8 нету русского поэтому всё на английском
//В лабах выше 3 уже есть русский я пофиксил




void reverse_string(char s[], int start, int end) {
    // Базовый случай: если начало больше или равно концу, значит, строка перевернута
    if (start >= end) {
        return;
    }

    // Меняем местами символы на позициях start и end
    char temp = s[start];
    s[start] = s[end];
    s[end] = temp;

    // Рекурсивный вызов для следующей пары символов
    reverse_string(s, start + 1, end - 1);
}

int main() {

    setlocale(LC_ALL,"Russian");

    char s[101];


    printf("Введите строку: ");
    fgets(s, sizeof(s), stdin);

    // Убираем символ новой строки, если он есть
    s[strcspn(s, "\n")] = '\0';


    int length = strlen(s);


    reverse_string(s, 0, length - 1);


    printf("Перевернутая строка: %s\n", s);

    return 0;
}
