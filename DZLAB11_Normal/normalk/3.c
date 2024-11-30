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

    FILE *sourceFile, *destinationFile;
    char ch;

    // Открытие исходного файла для чтения
    sourceFile = fopen("source.txt", "r");
    if (sourceFile == NULL) {
        printf("Ошибка при открытии исходного файла.\n");
        return 1;
    }

    // Открытие целевого файла для записи (перезапись, если существует)
    destinationFile = fopen("destination.txt", "w");
    if (destinationFile == NULL) {
        printf("Ошибка при открытии целевого файла.\n");
        fclose(sourceFile);
        return 1;
    }

    // Копирование содержимого из source.txt в destination.txt
    while ((ch = fgetc(sourceFile)) != EOF) {
        fputc(ch, destinationFile);
    }

    printf("Содержимое из source.txt скопировано в destination.txt\n");

    fclose(sourceFile);
    fclose(destinationFile);
    return 0;
}
