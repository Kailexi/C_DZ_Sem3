#include <stdio.h>
#include <locale.h>

//Made by Kailexi/Alexander Soldatov lmao
//https://github.com/Kailexi/C_DZ_Sem3

//Normal
//WARNING:

//� ���� ���������� ����� � ���� � ��������� UTF-8 ���� �������� ������� �� �� ����������
//� ����� ���� 3 ��� ���� ������� � ��������


typedef struct {
    float x;
    float y;
} Point;

int main() {

    setlocale(LC_ALL,"Russian");


    Point p;
    printf("������� ���������� ����� (x � y): ");
    scanf("%f %f", &p.x, &p.y);
    printf("���������� �����: (%.2f, %.2f)\n", p.x, p.y);

    return 0;
}
