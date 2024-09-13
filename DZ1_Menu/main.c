#include <stdio.h>





//Задание 1.
void ex1(){

    int number1, number2;

    printf("Enter two numbers: ");
    scanf_s("%d %d", &number1, &number2);


    printf_s("%d + %d = %d\n", number1, number2, number1 + number2);
    printf("%d - %d = %d\n", number1,number2, number1 - number2);
    printf("%d * %d = %d\n", number1,number2, number1 * number2);
    printf("%d / %d = %d\n", number1,number2, number1 / number2);
    printf_s("The remainder from %d / %d is: %d\n", number1,number2, number1 % number2); //Сейчас бы побитовые манипуляции а не вот это всё

}

//Задание 2.
void ex2(){

    double num1,num2,num3;

     printf_s("Enter 3 numbers");
     scanf_s("%lf %lf %lf", &num1, &num2, &num3);

     printf_s("The arithmetic medium is: %lf \n", (num1 + num2 + num3) / 3 );//Ммм not_scalable lmao

}

//Задание 3.
void ex3(){
    int minute;

    printf_s("Enter the amount of minutes you want to convert\n");
    scanf_s("%d", &minute);


    if((minute / 60) == 1){
        printf_s("You have %d hour and %d minutes left\n", minute / 60, minute % 60);
    }
    else{
        printf_s("You have %d hours and %d minutes left\n", minute / 60, minute % 60);//Верните мне мои 14 когда я думал решить задачу через библеотеку вместо простой фигни это смешно
    }

}

//Задание 4.
void ex4(){
    float radius;
    const float pi = 3.14159;

    printf_s("Please enter a radius");

    scanf_s("%f", &radius);

    printf_s("If the radius of this circle is %f then"
             "\nThe diameter is: %f"
             "\nThe circumference is: %f"
             "\nThe area of the circle is: %f\n", radius, radius*2, 2*pi*radius, pi*(radius*radius)); //Я забыл все формулы спасибо гугл

}

//Задание 5. smh this task zzz.....
void ex5(){


    //Вариант 1 \t - кому интересно это пробелы мне так понятнее видеть где они

    //Тут без \t - мне было интересно посмотреть как это будет и вроде такое себе...
    printf_s("  *  *  *  *\n");
    printf_s("*  *  *  *  \n");
    printf_s("  *  *  *  *\n");
    printf_s("*  *  *  *  \n");
    printf_s("  *  *  *  *\n");
    printf_s("*  *  *  *  \n");
    printf_s("  *  *  *  *\n");


    //Вариант 2 ура ура всё в 1 одном print_s

    printf_s("\n\n\n\n\t*\t*\t*\t*"
             "\n*\t*\t*\t*\t"
             "\n\t*\t*\t*\t*"
             "\n*\t*\t*\t*\t"
             "\n\t*\t*\t*\t*"
             "\n*\t*\t*\t*\t"
             "\n\t*\t*\t*\t*"
             "\n*\t*\t*\t*\t");
}

//Задание 6.
void ex6(){
    int five_digit_number;

    printf_s("Enter a 5-digit number:");
    scanf_s("%d",&five_digit_number);

    if(five_digit_number / 10000 > 0 && five_digit_number / 10000 < 10){ //Проверка на 5-значное число а то NO-NO-NO Mr.Fish
        printf("Result is: %d\t%d\t%d\t%d\t%d",(five_digit_number / 10000) % 10,
               (five_digit_number / 1000) % 10,
               (five_digit_number / 100) % 10,
               (five_digit_number / 10) % 10,
               five_digit_number % 10);

    }
    else{
        printf("Not a 5 digit number sorry");
    }
}





//Меню или просто чекер заданий dunno
int main(){

    int menu_entrance = 200;

    printf_s("Welcome to lab1 DZ by Kailexi/Alexander Soldatov"
           "\nIf you want to check any of the DZ");

    while(menu_entrance != 0){


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
        switch(menu_entrance){
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
            case 0:
                printf_s("Exiting the Program");
                return 0;
            default:
                break;
        }





    }
}







