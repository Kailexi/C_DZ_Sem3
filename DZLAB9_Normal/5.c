#include <stdio.h>
#include <locale.h>

//Made by Kailexi/Alexander Soldatov lmao
//https://github.com/Kailexi/C_DZ_Sem3

//Normal
//WARNING:

//� ���� ���������� ����� � ���� � ��������� UTF-8 ���� �������� ������� �� �� ����������
//� ����� ���� 3 ��� ���� ������� � ��������



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
    printf("������� ����� (����, ������, �������): ");
    scanf("%d %d %d", &t.hours, &t.minutes, &t.seconds);
    printTime(t);

    return 0;
}
