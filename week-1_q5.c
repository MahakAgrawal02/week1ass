#include<stdio.h>
void main()
{
    float r,d,c,a;
    printf("Enter the radius of circle:");
    scanf("%f", &r);
    d = r * 2;
    printf("The diameter of the circle is: %f \n", d);
    c = 2 * 3.14 * r;
    printf("The circumference of circle is: %f \n", c);
    a = 3.14 * r * r;
    printf("The area of the circle is: %f \n", a);
}