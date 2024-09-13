#include <stdio.h>

int main(){
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