#include <stdio.h>
#include <locale.h>

//Made by Kailexi/Alexander Soldatov lmao
//https://github.com/Kailexi/C_DZ_Sem3

//Normal
//WARNING:

//У меня АНГЛИЙСКАЯ ВИНДА у меня в кодировке UTF-8 нету русского поэтому всё на английском
//В лабах выше 3 уже есть русский я пофиксил



typedef struct {
    char name[50];
    int age;
    float average_grade;
} Student;

int main() {

    setlocale(LC_ALL,"Russian");

    Student student;


    printf("Введите имя студента: ");
    scanf("%s", student.name);
    printf("Введите возраст студента: ");
    scanf("%d", &student.age);
    printf("Введите средний балл студента: ");
    scanf("%f", &student.average_grade);


    printf("\nИнформация о студенте:\n");
    printf("Имя: %s\n", student.name);
    printf("Возраст: %d\n", student.age);
    printf("Средний балл: %.2f\n", student.average_grade);

    return 0;
}
