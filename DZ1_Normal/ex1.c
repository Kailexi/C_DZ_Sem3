#include <stdio.h>



int main(){



    int number1, number2;

    printf("Enter two numbers: \n");
    scanf_s("%d %d", &number1, &number2);


    printf_s("%d + %d = %d\n", number1, number2, number1 + number2);
    printf("%d - %d = %d\n", number1,number2, number1 - number2);
    printf("%d * %d = %d\n", number1,number2, number1 * number2);
    printf("%d / %d = %d\n", number1,number2, number1 / number2);
    printf_s("The remainder from %d / %d is: %d\n", number1,number2, number1 % number2); //Сейчас бы побитовые манипуляции а не вот это всё

}

