#include <stdio.h>


int main(){
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



