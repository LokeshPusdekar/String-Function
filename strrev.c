#include<stdio.h>
void mystrrev(char* );
int main()
{
    char str[10],btr[10];

    printf("Enter a String:");
    scanf(" %s", str);

    mystrrev(str);
}

void mystrrev(char* str)
{   
    char temp[10];
    int i=0,j=0,flag=0;
    //finding the length of the string
    while (str[i] != '\0')
    {
        i++;
    }
    printf("Size=%d", i);

    // //Reversing the string
    i--; //to avoid null character
    while (i >= 0)
    {
        temp[j] = str[i];
        j++;
        i--;
    }
    temp[j] = '\0';
    printf("\noriginal string: %s",str);
    printf("\nReverse string: %s",temp);

    for (int z = 0; str[z] != '\0'; z++)
    {
        if (temp[z] == str[z])
        {
            flag = 1;
            
        }
    }
      
    if (flag == 1)
    {
        printf("\nThe string is palindrome.");
    }
    else
    {
        printf("\nThe string is not palindrome.");
    }  
    
}