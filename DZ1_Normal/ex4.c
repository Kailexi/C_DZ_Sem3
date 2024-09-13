#include <stdio.h>








int main(){
    float radius;
    const float pi = 3.14159;

    printf_s("Please enter a radius");

    scanf_s("%f", &radius);

    printf_s("If the radius of this circle is %f then"
             "\nThe diameter is: %f"
             "\nThe circumference is: %f"
             "\nThe area of the circle is: %f\n", radius, radius*2, 2*pi*radius, pi*(radius*radius)); //Я забыл все формулы спасибо гугл
}