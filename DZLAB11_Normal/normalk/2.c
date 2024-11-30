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
    char buffer[100];
    int lineCount = 0;

    // Открытие файла для чтения
    file = fopen("input.txt", "r");
    if (file == NULL) {
        printf("Ошибка при открытии файла.\n");
        return 1;
    }

    // Чтение строк из файла и подсчет количества
    while (fgets(buffer, sizeof(buffer), file) != NULL) {
        lineCount++;
    }

    printf("Количество строк в файле input.txt: %d\n", lineCount);

    fclose(file);
    return 0;
}
