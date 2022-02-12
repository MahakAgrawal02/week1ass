#include<stdio.h>
void main()
{
    char name[35];
    printf("Please enter your name: \n");
    scanf("%s", &name);
    long reg;
    printf("Please enter your registration number: \n");
    scanf("%d", &reg);
    char branch[35];
    printf("Please enter your branch name: \n");
    scanf("%s", &branch);
    char hob[30];
    printf("What are your hobbies: \n");
    scanf("%s", &hob);
    printf("Your name is: %s \n", name);
    printf("Your registration number is: %d \n", reg);
    printf("Your branch name is: %s \n", branch);
    printf("Your hobbies are: %s \n", hob);
}