#include <stdio.h>
#include <string.h>
#include <locale.h>

//Made by Kailexi/Alexander Soldatov lmao
//https://github.com/Kailexi/C_DZ_Sem3

//Normal
//WARNING:

//� ���� ���������� ����� � ���� � ��������� UTF-8 ���� �������� ������� �� �� ����������
//� ����� ���� 3 ��� ���� ������� � ��������


int is_palindrome(char s[], int start, int end) {
    // ������� ������: ���� ������ ������ ��� ������� �� ������ �������
    if (start >= end) {
        return 1;  // ���������
    }
    // ����������� ������: ���������� ������ � ��������� �������
    if (s[start] != s[end]) {
        return 0;  // �� ���������
    }
    // ����������� ����� ��� ���������� ���������
    return is_palindrome(s, start + 1, end - 1);
}

int main() {

    setlocale(LC_ALL,"Russian");

    char s[101];


    printf("������� ������: ");
    fgets(s, 101, stdin);

    // ������� ������ ����� ������, ���� �� ����
    s[strcspn(s, "\n")] = 0;


    int len = strlen(s);


    if (is_palindrome(s, 0, len - 1)) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}
