#include <stdio.h>
#include <locale.h>

//Made by Kailexi/Alexander Soldatov lmao
//https://github.com/Kailexi/C_DZ_Sem3

//Normal
//WARNING:

//� ���� ���������� ����� � ���� � ��������� UTF-8 ���� �������� ������� �� �� ����������
//� ����� ���� 3 ��� ���� ������� � ��������




int factorial(int n) {
    if (n == 0) {
        return 1; // ������� ������: 0! = 1
    } else {
        return n * factorial(n - 1); // ����������� �����
    }
}


int main() {

    setlocale(LC_ALL,"Russian");

    int n;

    printf("������� ����� n (0 <= n <= 12): ");
    scanf("%d", &n);


    if (n < 0 || n > 12) {
        printf("����� ������ ���� � �������� �� 0 �� 12.\n");
        return 1;
    }


    printf("��������� ����� %d �����: %d\n", n, factorial(n));

    return 0;
}
