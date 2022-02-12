#include<stdio.h>
void main()
{
    int x,y;
    printf("Enter any two number: \n");
    scanf("%d %d", &x, &y);
    if(x<y)
    {
        printf("Max between both the number is: %d", y);
    }
    else
    {
        printf("Max between both the number is: %d", x);
    }
}