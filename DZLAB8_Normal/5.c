#include <stdio.h>
#include <locale.h>

//Made by Kailexi/Alexander Soldatov lmao
//https://github.com/Kailexi/C_DZ_Sem3

//Normal
//WARNING:

//� ���� ���������� ����� � ���� � ��������� UTF-8 ���� �������� ������� �� �� ����������
//� ����� ���� 3 ��� ���� ������� � ��������




int count_digits(int n) {
    // ������� ������: ���� ����� ������ 10, �� ��� ������� �� ����� �����
    if (n < 10) {
        return 1;
    }
    // ����������� ������: ����� ����� �� 10 � ����������� �������
    return 1 + count_digits(n / 10);
}

int main() {

    setlocale(LC_ALL,"Russian");

    int n;


    printf("������� �����: ");
    scanf("%d", &n);


    printf("���������� ���� � �����: %d\n", count_digits(n));

    return 0;
}
