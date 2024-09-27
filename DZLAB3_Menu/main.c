#include <stdio.h>
#include <string.h>
//Made by Kailexi/Alexander Soldatov lmao
//https://github.com/Kailexi/C_DZ_Sem3
//Menu

//WARNING:
//У меня АНГЛИЙСКАЯ ВИНДА у меня в кодировке UTF-8 нету русского поэтому всё на английском


void ex1(){

    char name[100], surname[100];

    printf("Enter your name and surname:\n");
    scanf("%s %s", name, surname);

    printf("Your surname is %s, %s", surname, name);

}

void ex2(){

    char name[100];

    printf_s("Enter your name:\n");
    scanf_s("%s", name); // Double quotation marks lmaooo

    printf_s("\"%s\"\n", name);

    printf_s("\"%20s\"\n", name); // 20 - width from right

    printf_s("\"%-20s\"\n", name);// 20 - width from left

    printf_s("%*s", strlen(name) + 3, name);// string length + 3 width


}
void ex3(){
    float number;

    printf_s("Enter floating-point number:"); // Didn't we do this already?
    // I guess who cares right?

    scanf_s("%f", &number);

    printf_s("You entered: %.1f or %.1e\n", number, number);

    printf_s("which is also: %+.3f or %.3E\n", number, number);



}
void ex4(){

    float cm, meters;
    char name[100];

    printf_s("Enter your name:\n");
    scanf_s("%s", &name);

    printf_s("Enter your height in cm:\n");
    scanf_s("%f", &cm);

    meters = cm / 100;

    printf_s("%s, you height is %.2f meters", name, meters);


}

void ex5(){

    float download_speed_MBITS, size_MBytes, MBytes_to_Mbits, time;

    printf_s("Enter your internet connection speed in mega bits (Mbps):\n");
    scanf_s("%f", &download_speed_MBITS);

    printf_s("Enter file size in mega bytes (MB):\n");
    scanf_s("%f", &size_MBytes);

    MBytes_to_Mbits = size_MBytes * 8;
    time = MBytes_to_Mbits / download_speed_MBITS;

    printf_s("Your speed is %.2f Mbps, file size is:%.2f MB."
           "\nIt would be downloaded in %.2f seconds"
            ,download_speed_MBITS, size_MBytes, time);



}
void ex6(){


    char name[100], surname[100];

    printf_s("Enter your name:\n");
    scanf_s("%s", &name);

    printf_s("Enter your surname:\n");
    scanf_s("%s", &surname);

    printf_s("%s %s\n", name, surname);

    printf_s("%*d %*d\n", strlen(name), strlen(name),
             strlen(surname), strlen(surname));

}
void ex7(){}
void ex8(){}


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






