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
    char text[100];
    
    // ������ ������ � ������������
    printf("������� ������ ������: ");
    fgets(text, sizeof(text), stdin);

    // �������� ����� ��� ������ (��������������� ���� ����������)
    file = fopen("output.txt", "w");
    if (file == NULL) {
        printf("������ ��� �������� �����.\n");
        return 1;
    }

    // ������ ������ � ����
    fputs(text, file);
    printf("������ �������� � ���� output.txt\n");

    fclose(file);
    return 0;
}
