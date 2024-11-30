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

    FILE *studentsFile, *attendanceFile;
    char studentName[100], attendance;
    int studentCount;

    // Открытие файла с именами студентов
    studentsFile = fopen("students.txt", "r");
    if (studentsFile == NULL) {
        printf("Ошибка при открытии файла студентов.\n");
        return 1;
    }

    // Открытие файла для записи посещаемости
    attendanceFile = fopen("attendance.txt", "w");
    if (attendanceFile == NULL) {
        printf("Ошибка при открытии файла для записи посещаемости.\n");
        fclose(studentsFile);
        return 1;
    }

    // Считывание имен студентов и запись их посещаемости
    fscanf(studentsFile, "%d", &studentCount); // Предполагается, что в первой строке указано количество студентов

    for (int i = 0; i < studentCount; i++) {
        fscanf(studentsFile, "%s", studentName);
        printf("Студент %s присутствует? (y/n): ", studentName);
        scanf(" %c", &attendance); // Пробел перед %c для игнорирования символа новой строки

        fprintf(attendanceFile, "%s: %c\n", studentName, attendance);
    }

    printf("Посещаемость записана в файл attendance.txt\n");

    fclose(studentsFile);
    fclose(attendanceFile);
    return 0;
}
