#include <stdio.h>
#include <string.h>
#include <locale.h>

//Made by Kailexi/Alexander Soldatov lmao
//https://github.com/Kailexi/C_DZ_Sem3

//Normal
//WARNING:

//У меня АНГЛИЙСКАЯ ВИНДА у меня в кодировке UTF-8 нету русского поэтому всё на английском
//В лабах выше 3 уже есть русский я пофиксил



int main() {


    setlocale(LC_ALL,"Russian");


    FILE *inputFile, *outputFile;
    char ch;
    long fileSize;

    // Открытие файла для чтения
    inputFile = fopen("input.txt", "r");
    if (inputFile == NULL) {
        printf("Ошибка при открытии файла.\n");
        return 1;
    }

    // Находим размер файла
    fseek(inputFile, 0, SEEK_END);
    fileSize = ftell(inputFile);
    rewind(inputFile);

    // Открытие файла для записи
    outputFile = fopen("reversed.txt", "w");
    if (outputFile == NULL) {
        printf("Ошибка при открытии файла.\n");
        fclose(inputFile);
        return 1;
    }

    // Чтение содержимого файла и запись в обратном порядке
    for (long i = fileSize - 1; i >= 0; i--) {
        fseek(inputFile, i, SEEK_SET);
        ch = fgetc(inputFile);
        fputc(ch, outputFile);
    }

    printf("Содержимое из input.txt записано в reversed.txt в обратном порядке.\n");

    fclose(inputFile);
    fclose(outputFile);
    return 0;
}
