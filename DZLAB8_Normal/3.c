#include <stdio.h>
#include <locale.h>

//Made by Kailexi/Alexander Soldatov lmao
//https://github.com/Kailexi/C_DZ_Sem3

//Normal
//WARNING:

//� ���� ���������� ����� � ���� � ��������� UTF-8 ���� �������� ������� �� �� ����������
//� ����� ���� 3 ��� ���� ������� � ��������




int sum_of_digits(int n) {
    if (n == 0) {
        return 0;  // ������� ������: ����� ���� ����� 0 ����� 0
    } else {
        return (n % 10) + sum_of_digits(n / 10);  // ��������� ��������� ����� � ���������� ��������� ��� ���������� ����� �����
    }
}

int main() {

    setlocale(LC_ALL,"Russian");

    int n;


    printf("������� �����: ");
    scanf("%d", &n);


    printf("����� ���� ����� %d �����: %d\n", n, sum_of_digits(n));

    return 0;
}
