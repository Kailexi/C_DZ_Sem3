#include <stdio.h>
#include <locale.h>


//Made by Kailexi/Alexander Soldatov lmao
//https://github.com/Kailexi/C_DZ_Sem3

//Normal
//WARNING:

//� ���� ���������� ����� � ���� � ��������� UTF-8 ���� �������� ������� �� �� ����������
//� ����� ���� 3 ��� ���� ������� � ��������




typedef enum {
    POOR = 1,
    AVERAGE,
    GOOD,
    EXCELLENT
} ServiceRating;

int main() {

    setlocale(LC_ALL,"Russian");


    int rating;
    printf("������� ������ �������� ������������ (1 - POOR, 2 - AVERAGE, 3 - GOOD, 4 - EXCELLENT): ");
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
            printf("�������� ����\n");
            break;
    }

    return 0;
}
