#include <stdio.h>
#include <locale.h>

//Made by Kailexi/Alexander Soldatov lmao
//https://github.com/Kailexi/C_DZ_Sem3

//Normal
//WARNING:

//У меня АНГЛИЙСКАЯ ВИНДА у меня в кодировке UTF-8 нету русского поэтому всё на английском
//В лабах выше 3 уже есть русский я пофиксил


typedef enum {
    MONDAY = 1,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY,
    SUNDAY
} Days;

int main() {

    setlocale(LC_ALL,"Russian");

    int day;
    printf("Введите день недели (1 - Понедельник, 7 - Воскресенье): ");
    scanf("%d", &day);

    switch (day) {
        case MONDAY:
            printf("MONDAY - Рабочий день\n");
            break;
        case TUESDAY:
            printf("TUESDAY - Рабочий день\n");
            break;
        case WEDNESDAY:
            printf("WEDNESDAY - Рабочий день\n");
            break;
        case THURSDAY:
            printf("THURSDAY - Рабочий день\n");
            break;
        case FRIDAY:
            printf("FRIDAY - Рабочий день\n");
            break;
        case SATURDAY:
            printf("SATURDAY - Выходной день\n");
            break;
        case SUNDAY:
            printf("SUNDAY - Выходной день\n");
            break;
        default:
            printf("Неверный день недели\n");
            break;
    }

    return 0;
}
