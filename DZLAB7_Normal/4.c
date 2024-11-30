#include <stdio.h>
#include <locale.h>



//Made by Kailexi/Alexander Soldatov lmao
//https://github.com/Kailexi/C_DZ_Sem3

//Normal
//WARNING:

//� ���� ���������� ����� � ���� � ��������� UTF-8 ���� �������� ������� �� �� ����������
//� ����� ���� 3 ��� ���� ������� � ��������




void turn_heater_on() {
    printf("������������ �������.\n");
}

void turn_air_conditioner_on() {
    printf("����������� �������.\n");
}


void maintain_temperature() {
    printf("����������� ��������������.\n");
}

void turn_system_off() {
    printf("������� ���������.\n");
}

int main() {

    setlocale(LC_ALL,"Russian");

    void (*control[4])() = {turn_heater_on, turn_air_conditioner_on, maintain_temperature, turn_system_off};
    int choice;

    do {
        printf("\n���� ������-��������:\n");
        printf("1. �������� ������������\n");
        printf("2. �������� �����������\n");
        printf("3. ������������ ������� �����������\n");
        printf("4. ��������� �������\n");
        printf("�������� �����: ");
        scanf("%d", &choice);

        if (choice >= 1 && choice <= 4) {
            control[choice - 1]();
        } else {
            printf("�������� �����. ���������� �����.\n");
        }
    } while (choice != 4);

    return 0;
}
