#include <stdio.h>
#include <locale.h>

//Made by Kailexi/Alexander Soldatov lmao
//https://github.com/Kailexi/C_DZ_Sem3

//Normal
//WARNING:

//� ���� ���������� ����� � ���� � ��������� UTF-8 ���� �������� ������� �� �� ����������
//� ����� ���� 3 ��� ���� ������� � ��������



int power(int x, int n) {
    // ������� ������: x^0 = 1
    if (n == 0) {
        return 1;
    }
    // ����������� ������: x^n = x * x^(n-1)
    return x * power(x, n - 1);
}

int main() {


    setlocale(LC_ALL,"Russian");
    int x, n;



    printf("������� ��������� x (0 <= x <= 10): ");
    scanf("%d", &x);
    printf("������� ������� n (0 <= n <= 10): ");
    scanf("%d", &n);


    printf("���������: %d^%d = %d\n", x, n, power(x, n));

    return 0;
}


