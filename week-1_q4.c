// C Program to Perform Arithmetic Operations using Switch statement
#include <stdio.h>

void main() 
{
    int p, q, choice;

    printf("Enter any two positive integer numbers:\n");
    scanf("%d %d", &p, &q);

    printf("\n Input your choice to make an operation\n");
    printf("\n 1 :: for Addition");
    printf("\n 2 :: for Substraction");
    printf("\n 3 :: for Multiplication");
    printf("\n 4 :: for Division");
    printf("\n 5 :: for Modulus");

    printf("\n\nEnter your choice: ");
    scanf("%d", &choice);

    printf("\n");
    switch (choice) {
        case 1:
            printf("Addition of %d + %d = %d\n", p, q, p + q);
            break;

        case 2:
            printf("Substraction of %d - %d = %d\n", p, q, p - q);
            break;

        case 3:
            printf("Multiplication of %d * %d = %d\n", p, q, p * q);
            break;

        case 4:
            printf("Division of %d / %d = %f\n", p, q, (float)p / q);
            break;

        case 5:
            printf("Modulus of %d %% %d = %d\n", p, q, p % q);
            break;

        default:
            printf("\nKindly input correct choice!\n");
            break;
    }
}