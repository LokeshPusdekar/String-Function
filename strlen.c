#include<stdio.h>

int mystrlen(char* str);

int main()
{
    char name[10];

    printf("Enter your name: ");
    scanf("%s",name);
    printf("Your Name: %s",name);
    
    mystrlen(name);
}

int mystrlen(char* str)
{   int i;
    for (i = 0; str[i] != '\0'; i++)
    {
       // count = count + i;
    }
    printf("\nThe String count is : %d", i);

    str[i] ='\0';

    return i;
}