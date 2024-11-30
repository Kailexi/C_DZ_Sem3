#include <stdio.h>
#include <locale.h>


//Made by Kailexi/Alexander Soldatov lmao
//https://github.com/Kailexi/C_DZ_Sem3

//Normal
//WARNING:

//У меня АНГЛИЙСКАЯ ВИНДА у меня в кодировке UTF-8 нету русского поэтому всё на английском
//В лабах выше 3 уже есть русский я пофиксил


typedef enum {
    RED = 0,
    YELLOW,
    GREEN
} TrafficLight;

int main() {

    setlocale(LC_ALL,"Russian");

    int light;
    printf("Введите текущее состояние светофора (0 - RED, 1 - YELLOW, 2 - GREEN): ");
    scanf("%d", &light);

    switch (light) {
        case RED:
            printf("STOP\n");
            break;
        case YELLOW:
            printf("READY\n");
            break;
        case GREEN:
            printf("GO\n");
            break;
        default:
            printf("Неверный ввод\n");
            break;
    }

    return 0;
}
