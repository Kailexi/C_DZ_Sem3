#include <stdio.h>
#include <locale.h>


//Made by Kailexi/Alexander Soldatov lmao
//https://github.com/Kailexi/C_DZ_Sem3

//Normal
//WARNING:

//У меня АНГЛИЙСКАЯ ВИНДА у меня в кодировке UTF-8 нету русского поэтому всё на английском
//В лабах выше 3 уже есть русский я пофиксил




typedef enum {
    POOR = 1,
    AVERAGE,
    GOOD,
    EXCELLENT
} ServiceRating;

int main() {

    setlocale(LC_ALL,"Russian");


    int rating;
    printf("Введите оценку качества обслуживания (1 - POOR, 2 - AVERAGE, 3 - GOOD, 4 - EXCELLENT): ");
    scanf("%d", &rating);

    switch (rating) {
        case POOR:
            printf("POOR\n");
            break;
        case AVERAGE:
            printf("AVERAGE\n");
            break;
        case GOOD:
            printf("GOOD\n");
            break;
        case EXCELLENT:
            printf("EXCELLENT\n");
            break;
        default:
            printf("Неверный ввод\n");
            break;
    }

    return 0;
}
