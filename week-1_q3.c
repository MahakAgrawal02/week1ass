#include<stdio.h>
void main()
{
    int x;
    printf("Enter any number:");
    scanf("%d", &x);
    switch (x % 2) 
    {
        case 0:
        printf("Number is even");
        break;
        case 1:
        printf("Number is odd");
        break;
    }
}