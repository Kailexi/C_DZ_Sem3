#include <stdio.h>
#include <locale.h>

//Made by Kailexi/Alexander Soldatov lmao
//https://github.com/Kailexi/C_DZ_Sem3

//Normal
//WARNING:

//� ���� ���������� ����� � ���� � ��������� UTF-8 ���� �������� ������� �� �� ����������
//� ����� ���� 3 ��� ���� ������� � ��������




int fibonacci(int n) {
    if (n == 0) {
        return 0; // ������� ������: F(0) = 0
    } else if (n == 1) {
        return 1; // ������� ������: F(1) = 1
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2); // ����������� ������
    }
}

int main() {

    setlocale(LC_ALL,"Russian");


    int n;


    printf("������� ������ n (0 <= n <= 30): ");
    scanf("%d", &n);


    if (n < 0 || n > 30) {
        printf("������ ������ ���� � �������� �� 0 �� 30.\n");
        return 1;
    }


    printf("����� ��������� � �������� %d �����: %d\n", n, fibonacci(n));

    return 0;
}
