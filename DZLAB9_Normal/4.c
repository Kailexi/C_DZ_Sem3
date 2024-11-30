#include <stdio.h>
#include <locale.h>

//Made by Kailexi/Alexander Soldatov lmao
//https://github.com/Kailexi/C_DZ_Sem3

//Normal
//WARNING:

//У меня АНГЛИЙСКАЯ ВИНДА у меня в кодировке UTF-8 нету русского поэтому всё на английском
//В лабах выше 3 уже есть русский я пофиксил


typedef struct {
    float x;
    float y;
} Point;

int main() {

    setlocale(LC_ALL,"Russian");


    Point p;
    printf("Введите координаты точки (x и y): ");
    scanf("%f %f", &p.x, &p.y);
    printf("Координаты точки: (%.2f, %.2f)\n", p.x, p.y);

    return 0;
}
