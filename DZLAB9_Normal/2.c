#include <stdio.h>
#include <locale.h>

//Made by Kailexi/Alexander Soldatov lmao
//https://github.com/Kailexi/C_DZ_Sem3

//Normal
//WARNING:

//� ���� ���������� ����� � ���� � ��������� UTF-8 ���� �������� ������� �� �� ����������
//� ����� ���� 3 ��� ���� ������� � ��������


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
    printf("������� ���� ������ (1 - �����������, 7 - �����������): ");
    scanf("%d", &day);

    switch (day) {
        case MONDAY:
            printf("MONDAY - ������� ����\n");
            break;
        case TUESDAY:
            printf("TUESDAY - ������� ����\n");
            break;
        case WEDNESDAY:
            printf("WEDNESDAY - ������� ����\n");
            break;
        case THURSDAY:
            printf("THURSDAY - ������� ����\n");
            break;
        case FRIDAY:
            printf("FRIDAY - ������� ����\n");
            break;
        case SATURDAY:
            printf("SATURDAY - �������� ����\n");
            break;
        case SUNDAY:
            printf("SUNDAY - �������� ����\n");
            break;
        default:
            printf("�������� ���� ������\n");
            break;
    }

    return 0;
}
