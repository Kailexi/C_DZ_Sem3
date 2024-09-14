#include <stdio.h>
#include <limits.h>
#include <float.h>

void ex1(){

    printf_s("Max int value = %d\n", INT_MAX);

    printf_s("Min float val = %e\n", FLT_MIN);

    printf_s("Max float val = %e\n", FLT_MAX);

    printf_s("Int overflow: %d + 1 = %d\n", INT_MAX, INT_MAX + 1);

    printf_s("Float-point overflow: %e * 2 = %e\n", FLT_MAX, FLT_MAX * 2);

    printf_s("Float-point lowest point(underflow): %e / 2 = %e", FLT_MIN, FLT_MIN / 2);




}

void ex2(){}
void ex3(){}
void ex4(){}
void ex5(){}
void ex6(){}
void ex7(){}
void ex8(){}

/*
int main(void)
{

}
*/

int main() {

    int menu_entrance = 200;

    printf_s("Welcome to lab1 DZ by Kailexi/Alexander Soldatov"
             "\nIf you want to check any of the DZ");

    while (menu_entrance != 0) {


        printf_s("\n\nWelcome to the MENU"
                 "\nOptions:"
                 "\n1.Enter 1 to check ex1:"
                 "\n2.Enter 2 to check ex2:"
                 "\n3.Enter 3 to check ex3:"
                 "\n4.Enter 4 to check ex4:"
                 "\n5.Enter 5 to check ex5:"
                 "\n6.Enter 6 to check ex6:"
                 "\n7.Enter 0 to exit the program:");


        scanf_s("%d", &menu_entrance);
        //Switch тут быстрее всё равно меню делаем
        switch (menu_entrance) {
            case 1:
                ex1();
                break;
            case 2:
                ex2();
                break;
            case 3:
                ex3();
                break;
            case 4:
                ex4();
                break;
            case 5:
                ex5();
                break;
            case 6:
                ex6();
                break;
            case 7:
                ex7();
                break;
            case 8:
                ex8();
                break;
            case 0:
                printf_s("Exiting the Program");
                return 0;
            default:
                break;
        }


    }
}
