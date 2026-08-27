#include<stdio.h>

void mystrcpy(char* str2, char* str1);

int main()
{
    char str1[10],str2[10];

    printf("Enter the you want to copy in String 2 : ");
    scanf("%s", str1);

    mystrcpy(str2, str1);

    printf("The string 1 is %s", str1);
    printf("\nThe string 2 is %s", str2);

}

void mystrcpy(char* str2, char* str1)
{   
    int i;
    for (i = 0; str1[i] != '\0'; i++)
    {
        str2[i] = str1[i];
    }


    // int i = 0;
    // while (str1[i] != '\0')
    // {
    //     str2[i] = str1[i];
    //     i++;
    // }
    
    str2[i] = '\0';

}