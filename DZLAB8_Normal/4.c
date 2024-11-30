#include <stdio.h>
#include <string.h>
#include <locale.h>

//Made by Kailexi/Alexander Soldatov lmao
//https://github.com/Kailexi/C_DZ_Sem3

//Normal
//WARNING:

//� ���� ���������� ����� � ���� � ��������� UTF-8 ���� �������� ������� �� �� ����������
//� ����� ���� 3 ��� ���� ������� � ��������




void reverse_string(char s[], int start, int end) {
    // ������� ������: ���� ������ ������ ��� ����� �����, ������, ������ �����������
    if (start >= end) {
        return;
    }

    // ������ ������� ������� �� �������� start � end
    char temp = s[start];
    s[start] = s[end];
    s[end] = temp;

    // ����������� ����� ��� ��������� ���� ��������
    reverse_string(s, start + 1, end - 1);
}

int main() {

    setlocale(LC_ALL,"Russian");

    char s[101];


    printf("������� ������: ");
    fgets(s, sizeof(s), stdin);

    // ������� ������ ����� ������, ���� �� ����
    s[strcspn(s, "\n")] = '\0';


    int length = strlen(s);


    reverse_string(s, 0, length - 1);


    printf("������������ ������: %s\n", s);

    return 0;
}
