#include<stdio.h>
int mystrchr(char* str, char ch);
int main()
{
    char str[10],ch;

    printf("Enter a String:");
    scanf("%s", str);

    printf("Enter a character to find:");
    scanf(" %c", &ch);

    mystrchr(str, ch);
    return 0;
}

int mystrchr(char* str, char ch)
{   
    int flag = 1;
    
        for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ch)
        {
            flag = 0;
            break;
        }
        
    }
    if (flag == 0)
        {
            printf("\nCharacter is found!!!");
        }
        else
        {
            printf("\nCharacter is not found!!!");
        }

    return -1;    
}