#include<stdio.h>
void mystrstr(char* str1, char* str2);

int main()
{
    char str1[10],str2[10];
    int flag =1;

    printf("Enter a String:");
    scanf("%s",str1);

    printf("Enter a Sub-String to find:");
    scanf("%s",str2);
    
    mystrstr(str1, str2);
}

void mystrstr(char* str1, char* str2)
{   
    int flag=1;
    for (int i = 0; str2[i] != '\0' ; i++)
    {
        for (int j = 0; str1[j] != '\0'; j++)
        {
            if (str2[i+j] == str1[j])
            {
                flag = 0;
                
            }
            
        }
        
        
    }
    
    if (flag == 0)
    {
        printf("The Sub-String is matched!!!");
    }
    else
    {
        printf("The Sub-String is not matched!!!");
    }
    
        
}

// didn't understand yet