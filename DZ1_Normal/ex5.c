#include <stdio.h>





int main(){
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