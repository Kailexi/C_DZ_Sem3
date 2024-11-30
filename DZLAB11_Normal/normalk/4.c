#include <stdio.h>
#include <ctype.h>
#include <locale.h>

//Made by Kailexi/Alexander Soldatov lmao
//https://github.com/Kailexi/C_DZ_Sem3

//Normal
//WARNING:

//� ���� ���������� ����� � ���� � ��������� UTF-8 ���� �������� ������� �� �� ����������
//� ����� ���� 3 ��� ���� ������� � ��������



int main() {

    setlocale(LC_ALL,"Russian");

    FILE *file;
    char ch;
    int wordCount = 0;
    int inWord = 0;

    // �������� ����� ��� ������
    file = fopen("text.txt", "r");
    if (file == NULL) {
        printf("������ ��� �������� �����.\n");
        return 1;
    }

    // ������� ���������� ����
    while ((ch = fgetc(file)) != EOF) {
        if (isalpha(ch)) {
            if (!inWord) {
                inWord = 1;
                wordCount++;
            }
        } else {
            inWord = 0;
        }
    }

    printf("���������� ���� � ����� text.txt: %d\n", wordCount);

    fclose(file);
    return 0;
}
