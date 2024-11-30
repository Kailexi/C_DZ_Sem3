#include <stdio.h>
#include <locale.h>

void hanoi(int n, char from, char to, char aux) {
    if (n == 1) {
        // ������� ������: ���� ����
        printf("����������� ���� 1 � %c �� %c\n", from, to);
        return;
    }

    // ���������� n-1 ������ � ���������� ������� �� ���������������
    hanoi(n - 1, from, aux, to);

    // ���������� ����� ������� ���� � ���������� ������� �� �������
    printf("����������� ���� %d � %c �� %c\n", n, from, to);

    // ���������� n-1 ������ � ���������������� ������� �� �������
    hanoi(n - 1, aux, to, from);
}

int main() {

    setlocale(LC_ALL,"Russian");


    int n;


    printf("������� ���������� ������: ");
    scanf("%d", &n);


    if (n <= 0) {
        printf("������: ���������� ������ ������ ���� ������ 0.\n");
        return 1;
    }


    printf("������� ��� %d ������:\n", n);
    hanoi(n, 'A', 'C', 'B');

    return 0;
}
