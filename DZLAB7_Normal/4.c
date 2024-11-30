#include <stdio.h>
#include <locale.h>



//Made by Kailexi/Alexander Soldatov lmao
//https://github.com/Kailexi/C_DZ_Sem3

//Normal
//WARNING:

//У меня АНГЛИЙСКАЯ ВИНДА у меня в кодировке UTF-8 нету русского поэтому всё на английском
//В лабах выше 3 уже есть русский я пофиксил




void turn_heater_on() {
    printf("Обогреватель включен.\n");
}

void turn_air_conditioner_on() {
    printf("Кондиционер включен.\n");
}


void maintain_temperature() {
    printf("Температура поддерживается.\n");
}

void turn_system_off() {
    printf("Система выключена.\n");
}

int main() {

    setlocale(LC_ALL,"Russian");

    void (*control[4])() = {turn_heater_on, turn_air_conditioner_on, maintain_temperature, turn_system_off};
    int choice;

    do {
        printf("\nМеню климат-контроля:\n");
        printf("1. Включить обогреватель\n");
        printf("2. Включить кондиционер\n");
        printf("3. Поддерживать текущую температуру\n");
        printf("4. Выключить систему\n");
        printf("Выберите режим: ");
        scanf("%d", &choice);

        if (choice >= 1 && choice <= 4) {
            control[choice - 1]();
        } else {
            printf("Неверный выбор. Попробуйте снова.\n");
        }
    } while (choice != 4);

    return 0;
}
