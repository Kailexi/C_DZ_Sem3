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

    FILE *studentsFile, *attendanceFile;
    char studentName[100], attendance;
    int studentCount;

    // �������� ����� � ������� ���������
    studentsFile = fopen("students.txt", "r");
    if (studentsFile == NULL) {
        printf("������ ��� �������� ����� ���������.\n");
        return 1;
    }

    // �������� ����� ��� ������ ������������
    attendanceFile = fopen("attendance.txt", "w");
    if (attendanceFile == NULL) {
        printf("������ ��� �������� ����� ��� ������ ������������.\n");
        fclose(studentsFile);
        return 1;
    }

    // ���������� ���� ��������� � ������ �� ������������
    fscanf(studentsFile, "%d", &studentCount); // ��������������, ��� � ������ ������ ������� ���������� ���������

    for (int i = 0; i < studentCount; i++) {
        fscanf(studentsFile, "%s", studentName);
        printf("������� %s ������������? (y/n): ", studentName);
        scanf(" %c", &attendance); // ������ ����� %c ��� ������������� ������� ����� ������

        fprintf(attendanceFile, "%s: %c\n", studentName, attendance);
    }

    printf("������������ �������� � ���� attendance.txt\n");

    fclose(studentsFile);
    fclose(attendanceFile);
    return 0;
}
