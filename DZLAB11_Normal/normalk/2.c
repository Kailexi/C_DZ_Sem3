#include <stdio.h>
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
    char buffer[100];
    int lineCount = 0;

    // �������� ����� ��� ������
    file = fopen("input.txt", "r");
    if (file == NULL) {
        printf("������ ��� �������� �����.\n");
        return 1;
    }

    // ������ ����� �� ����� � ������� ����������
    while (fgets(buffer, sizeof(buffer), file) != NULL) {
        lineCount++;
    }

    printf("���������� ����� � ����� input.txt: %d\n", lineCount);

    fclose(file);
    return 0;
}
