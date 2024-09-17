#include <stdio.h>
#include <limits.h>
#include <float.h>
//Made by Kailexi/Alexander Soldatov lmao
//https://github.com/Kailexi/C_DZ_Sem3
//Menu

//WARNING:
//У меня АНГЛИЙСКАЯ ВИНДА у меня в кодировке UTF-8 нету русского поэтому всё на английском


void ex1(){
    //Limits.h ah classic

    printf_s("Max int value = %d\n", INT_MAX);

    printf_s("Max float val = %e\n", FLT_MAX);

    printf_s("Min float val = %e\n", FLT_MIN);

    printf_s("Int overflow: %d + 1 = %d\n", INT_MAX, INT_MAX + 1); // Overflow Error WOW Clion like i didn't know already

    printf_s("Float-point overflow: %e * 2 = %e\n", FLT_MAX, FLT_MAX * 2);

    printf_s("Float-point lowest point(underflow): %e / 2 = %e", FLT_MIN, FLT_MIN / 2);

}

void ex2(){

        int ascii_number; // Никаких char, только int, тут может быть accessed restricted memory
                          // или по другому 0xc0000005 error

        printf_s("Enter ASCII code:\n");
        scanf_s("%d", &ascii_number);

        printf_s("ASCII code for %d is %c", ascii_number, ascii_number); //Спасибо C, за удобство

}
void ex3(){


        printf_s("\aScared by sudden sound, Vika yelled:\n"); //Старый добрый \a создает звук
        // чтобы испугать тебя что у тебя наушники отключились или мышка хддд

        printf_s("\"By the all stars, what was it!\"");

}
void ex4(){

    float num1;

    printf_s("Enter float value: ");
    scanf_s("%f", &num1);


    printf_s("Fixed-point: %f\n", num1);
    printf_s("Exponential: %e\n", num1);
    printf_s("P notation: %a\n", num1); // Не всегда работает
    // смотрите как у вас там компилятор бряхнет


}
void ex5(){

    double years, seconds;
    printf("Your age:\n");
    scanf_s("%lf", &years); // scanf_s >> scan_f меньше шанс на проблемы с адресами

    seconds = years * 3.156e7; // e notion fuck pow and <math.h> optimization BABYYYYY

    printf("You have lived already more than %lf seconds", seconds);

    //кто сидит в визуалке вам бы в конце всех задач бы getchar() делать
    //а могли просто скачать CLION...
    //страдайте так сказать


}
void ex6(){
    double almost_litres, grams, molecules;
    printf("How much water do you drink daily (in quarts just short of a litre):\n");
    scanf_s("%lf", &almost_litres); // why quarts, we are Russian we drink litres of vodka lmao...

    grams = almost_litres * 950;
    molecules = grams / 3.0e-23; // no pow, only math notation is the GOAT

    printf("You consume daily %e water molecules", molecules);


}
void ex7(){
        double height_cm, height_inches; // again we are russian inches a for Americans
        const double cm_to_inch = 2.54; // je ne veux pas faire cet exercice
        //I'm definitely 6 foot i promise

        printf("Your height in cm:\n");
        scanf_s("%lf", &height_cm);

        height_inches = height_cm / cm_to_inch;

        printf("Your height in inches is %lf", height_inches);



}
void ex8(){
    double cups, pints, ounces, tablespoons, teaspoons;
    //ok, ok, LET HIM COOK
    //ok I'm done CLION autocorrects my commas in comments?

    printf("Enter number of cups:\n");
    scanf_s("%lf", &cups);

    pints = cups / 2; ounces = cups * 8;

    tablespoons = ounces * 2;
    teaspoons = tablespoons * 3;


    printf("%.2lf cups = %.2f pints\n", cups, pints);

    printf("%.2lf cups = %.2f ounces\n", cups, ounces);

    printf("%.2lf cups = %.2f tablespoons\n", cups, tablespoons);

    printf("%.2lf cups = %.2f teaspoons", cups, teaspoons);



}


int main() {

    int menu_entrance = 200;

    printf_s("Welcome to lab2 DZ by Kailexi/Alexander Soldatov"
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
                 "\n7.Enter 7 to check ex6:"
                 "\n8.Enter 8 to check ex6:"
                 "\n9.Enter 0 to exit the program:");


        scanf_s("%d", &menu_entrance);

        //Switch тут быстрее всё равно меню через цифры делаем
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