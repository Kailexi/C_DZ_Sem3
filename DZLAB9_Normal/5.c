#include <stdio.h>
#include <locale.h>

//Made by Kailexi/Alexander Soldatov lmao
//https://github.com/Kailexi/C_DZ_Sem3

//Normal
//WARNING:

//У меня АНГЛИЙСКАЯ ВИНДА у меня в кодировке UTF-8 нету русского поэтому всё на английском
//В лабах выше 3 уже есть русский я пофиксил



typedef struct {
    int hours;
    int minutes;
    int seconds;
} Time;

void printTime(Time t) {
    printf("%02d:%02d:%02d\n", t.hours, t.minutes, t.seconds);
}

int main() {

    setlocale(LC_ALL,"Russian");

    Time t;
    printf("Введите время (часы, минуты, секунды): ");
    scanf("%d %d %d", &t.hours, &t.minutes, &t.seconds);
    printTime(t);

    return 0;
}
