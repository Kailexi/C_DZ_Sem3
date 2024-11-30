#include <stdio.h>




int main(){
    double num1,num2,num3;

    printf_s("Enter 3 numbers");
    scanf_s("%lf %lf %lf", &num1, &num2, &num3);

    printf_s("The arithmetic medium is: %lf \n", (num1 + num2 + num3) / 3 );//Ммм not_scalable lmao
}
