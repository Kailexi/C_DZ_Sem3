#include <stdio.h>
#include <string.h>
#include <locale.h>

//Made by Kailexi/Alexander Soldatov lmao
//https://github.com/Kailexi/C_DZ_Sem3

//Normal
//WARNING:

//� ���� ���������� ����� � ���� � ��������� UTF-8 ���� �������� ������� �� �� ����������
//� ����� ���� 3 ��� ���� ������� � ��������



int main() {


    setlocale(LC_ALL,"Russian");


    FILE *inputFile, *outputFile;
    char ch;
    long fileSize;

    // �������� ����� ��� ������
    inputFile = fopen("input.txt", "r");
    if (inputFile == NULL) {
        printf("������ ��� �������� �����.\n");
        return 1;
    }

    // ������� ������ �����
    fseek(inputFile, 0, SEEK_END);
    fileSize = ftell(inputFile);
    rewind(inputFile);

    // �������� ����� ��� ������
    outputFile = fopen("reversed.txt", "w");
    if (outputFile == NULL) {
        printf("������ ��� �������� �����.\n");
        fclose(inputFile);
        return 1;
    }

    // ������ ����������� ����� � ������ � �������� �������
    for (long i = fileSize - 1; i >= 0; i--) {
        fseek(inputFile, i, SEEK_SET);
        ch = fgetc(inputFile);
        fputc(ch, outputFile);
    }

    printf("���������� �� input.txt �������� � reversed.txt � �������� �������.\n");

    fclose(inputFile);
    fclose(outputFile);
    return 0;
}
