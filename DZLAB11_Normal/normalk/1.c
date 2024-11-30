#include <stdio.h>
#include <locale.h>

//Made by Kailexi/Alexander Soldatov lmao
//https://github.com/Kailexi/C_DZ_Sem3

//Normal
//WARNING:

//У меня АНГЛИЙСКАЯ ВИНДА у меня в кодировке UTF-8 нету русского поэтому всё на английском
//В лабах выше 3 уже есть русский я пофиксил



int main() {

    setlocale(LC_ALL,"Russian");

    FILE *file;
    char text[100];
    
    // Запрос строки у пользователя
    printf("Введите строку текста: ");
    fgets(text, sizeof(text), stdin);

    // Открытие файла для записи (перезаписывание если существует)
    file = fopen("output.txt", "w");
    if (file == NULL) {
        printf("Ошибка при открытии файла.\n");
        return 1;
    }

    // Запись текста в файл
    fputs(text, file);
    printf("Строка записана в файл output.txt\n");

    fclose(file);
    return 0;
}
