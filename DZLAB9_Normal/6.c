#include <stdio.h>
#include <locale.h>


//Made by Kailexi/Alexander Soldatov lmao
//https://github.com/Kailexi/C_DZ_Sem3

//Normal
//WARNING:

//� ���� ���������� ����� � ���� � ��������� UTF-8 ���� �������� ������� �� �� ����������
//� ����� ���� 3 ��� ���� ������� � ��������


typedef int (*Operation)(int, int);

int add(int a, int b) {
    return a + b;
}

int multiply(int a, int b) {
    return a * b;
}

int main() {


    setlocale(LC_ALL,"Russian");

    int a, b;

    printf("������� ��� �����: ");
    scanf("%d %d", &a, &b);

    Operation op_add = add;
    Operation op_multiply = multiply;

    printf("�����: %d\n", op_add(a, b));
    printf("������������: %d\n", op_multiply(a, b));

    return 0;
}
