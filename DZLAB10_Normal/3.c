#include <stdio.h>
#include <locale.h>

//Made by Kailexi/Alexander Soldatov lmao
//https://github.com/Kailexi/C_DZ_Sem3

//Normal
//WARNING:

//У меня АНГЛИЙСКАЯ ВИНДА у меня в кодировке UTF-8 нету русского поэтому всё на английском
//В лабах выше 3 уже есть русский я пофиксил



typedef union {
    float temperature; // Температура
    float humidity;    // Влажность
    float wind_speed;  // Скорость ветра
} Measurement;

int main() {

    setlocale(LC_ALL,"Russian");


    int type;
    Measurement measurement;

    // Запрос типа измерения
    printf("Введите тип измерения (1 - Температура, 2 - Влажность, 3 - Скорость ветра): ");
    scanf("%d", &type);

    // Ввод значения в зависимости от типа
    switch (type) {
        case 1:
            printf("Введите температуру: ");
            scanf("%f", &measurement.temperature);
            printf("Температура: %.2f\n", measurement.temperature);
            break;
        case 2:
            printf("Введите влажность: ");
            scanf("%f", &measurement.humidity);
            printf("Влажность: %.2f\n", measurement.humidity);
            break;
        case 3:
            printf("Введите скорость ветра: ");
            scanf("%f", &measurement.wind_speed);
            printf("Скорость ветра: %.2f\n", measurement.wind_speed);
            break;
        default:
            printf("Неверный тип измерения.\n");
            break;
    }

    return 0;
}
