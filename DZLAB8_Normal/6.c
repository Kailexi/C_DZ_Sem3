#include <stdio.h>
#include <string.h>
#include <locale.h>

//Made by Kailexi/Alexander Soldatov lmao
//https://github.com/Kailexi/C_DZ_Sem3

//Normal
//WARNING:

//У меня АНГЛИЙСКАЯ ВИНДА у меня в кодировке UTF-8 нету русского поэтому всё на английском
//В лабах выше 3 уже есть русский я пофиксил


int is_palindrome(char s[], int start, int end) {
    // Базовый случай: если строка пустая или состоит из одного символа
    if (start >= end) {
        return 1;  // Палиндром
    }
    // Рекурсивный случай: сравниваем первый и последний символы
    if (s[start] != s[end]) {
        return 0;  // Не палиндром
    }
    // Рекурсивный вызов для оставшейся подстроки
    return is_palindrome(s, start + 1, end - 1);
}

int main() {

    setlocale(LC_ALL,"Russian");

    char s[101];


    printf("Введите строку: ");
    fgets(s, 101, stdin);

    // Убираем символ новой строки, если он есть
    s[strcspn(s, "\n")] = 0;


    int len = strlen(s);


    if (is_palindrome(s, 0, len - 1)) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}
