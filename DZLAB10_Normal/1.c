#include <stdio.h>
#include <locale.h>

//Made by Kailexi/Alexander Soldatov lmao
//https://github.com/Kailexi/C_DZ_Sem3

//Normal
//WARNING:

//� ���� ���������� ����� � ���� � ��������� UTF-8 ���� �������� ������� �� �� ����������
//� ����� ���� 3 ��� ���� ������� � ��������



typedef struct {
    char name[50];
    int age;
    float average_grade;
} Student;

int main() {

    setlocale(LC_ALL,"Russian");

    Student student;


    printf("������� ��� ��������: ");
    scanf("%s", student.name);
    printf("������� ������� ��������: ");
    scanf("%d", &student.age);
    printf("������� ������� ���� ��������: ");
    scanf("%f", &student.average_grade);


    printf("\n���������� � ��������:\n");
    printf("���: %s\n", student.name);
    printf("�������: %d\n", student.age);
    printf("������� ����: %.2f\n", student.average_grade);

    return 0;
}
