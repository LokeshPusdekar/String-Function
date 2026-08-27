#include<stdio.h>
void mystrncpy(char* str2, char* str1, int num);
int main()
{
    char str1[10],str2[10];
    int num;
    printf("Enter your name : ");
    scanf("%s",str1);
    printf("Enter number of character to copy : ");
    scanf("%d",&num);

    mystrncpy(str2, str1, num);

    printf("\nString 1: %s", str1);
    printf("\nString 2: %s", str2);
}

void mystrncpy(char* str2, char* str1, int num)
{   
    int i;
    for ( i = 0; i <= num; i++)
    {
        str2[i] = str1[i];
    }
    
    str2[i] = '\0'; 
}