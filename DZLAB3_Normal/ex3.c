#include <stdio.h>
//Made by Kailexi/Alexander Soldatov lmao
//https://github.com/Kailexi/C_DZ_Sem3
//Normal

//WARNING:
//У меня АНГЛИЙСКАЯ ВИНДА у меня в кодировке UTF-8 нету русского поэтому всё на английском




int main()
{
    float number;


    printf_s("Enter floating-point number:"); // Didn't we do this already?
    // I guess who cares right?

    scanf_s("%f", &number);

    printf_s("You entered: %.1f or %.1e\n", number, number);

    printf_s("which is also: %+.3f or %.3E\n", number, number);

    return 0;

}