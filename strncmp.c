#include<stdio.h>
void mystrncmp(char* str1, char* str2, int num);

int main()
{
    char str1[5],str2[5];
    int num,flag=0;
    int i;
    printf("Enter the string 1 and string 2:");
    scanf("%s%s",str1,str2);
    printf("Enter the value you want to compare:");
    scanf("%d",&num);


    mystrncmp(str1, str2, num);
}

void mystrncmp(char* str1, char* str2, int num)
{   
    int i,flag=0;
    for ( i = 0; i <= num ; i++)
    {
        if (str1[i] == str2[i])
        {
            flag = 1;
            break;
        }
        
    }
    str1[i] = '\0';

    if (flag == 1)
    {
        printf("The  value is same.");
    }
    else
    printf("The  value is not same.");
    
}