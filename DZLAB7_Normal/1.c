#include <stdio.h>
#include <locale.h>


//Made by Kailexi/Alexander Soldatov lmao
//https://github.com/Kailexi/C_DZ_Sem3

//Normal
//WARNING:

//� ���� ���������� ����� � ���� � ��������� UTF-8 ���� �������� ������� �� �� ����������
//� ����� ���� 3 ��� ���� ������� � ��������



// ������� ��� �������� ���� �����
int sum(int a, int b) {
    return a + b;
}

int main() {

    setlocale(LC_ALL,"Russian");

    int a, b;

    printf("������� ��� �����: ");
    scanf("%d %d", &a, &b);

    printf("�����: %d\n", sum(a, b));

    return 0;
}
