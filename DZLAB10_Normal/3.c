#include <stdio.h>
#include <locale.h>

//Made by Kailexi/Alexander Soldatov lmao
//https://github.com/Kailexi/C_DZ_Sem3

//Normal
//WARNING:

//� ���� ���������� ����� � ���� � ��������� UTF-8 ���� �������� ������� �� �� ����������
//� ����� ���� 3 ��� ���� ������� � ��������



typedef union {
    float temperature; // �����������
    float humidity;    // ���������
    float wind_speed;  // �������� �����
} Measurement;

int main() {

    setlocale(LC_ALL,"Russian");


    int type;
    Measurement measurement;

    // ������ ���� ���������
    printf("������� ��� ��������� (1 - �����������, 2 - ���������, 3 - �������� �����): ");
    scanf("%d", &type);

    // ���� �������� � ����������� �� ����
    switch (type) {
        case 1:
            printf("������� �����������: ");
            scanf("%f", &measurement.temperature);
            printf("�����������: %.2f\n", measurement.temperature);
            break;
        case 2:
            printf("������� ���������: ");
            scanf("%f", &measurement.humidity);
            printf("���������: %.2f\n", measurement.humidity);
            break;
        case 3:
            printf("������� �������� �����: ");
            scanf("%f", &measurement.wind_speed);
            printf("�������� �����: %.2f\n", measurement.wind_speed);
            break;
        default:
            printf("�������� ��� ���������.\n");
            break;
    }

    return 0;
}
