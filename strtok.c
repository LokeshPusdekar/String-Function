#include<stdio.h>
void mystrtok(char* str, char symbol);

int main()
{
    char names[50],sym=',';

    printf("Enter the names:");
    scanf("%s",names);

    printf("Enter the symbol by which string will be separated:");
    scanf(" %c",&sym);

    mystrtok(names, sym);
    return 0;   
}

void mystrtok(char* str, char symbol)
{   
    char tempstr[50];
    int i=0,j=0;
    while (str[j] != '\0')
    {
        for (i = 0; str[j] != symbol && str[j] != '\0'; i++)
        {
            tempstr[i] = str[j];
            j++;
        }
        tempstr[i]='\0';
        
        printf("\nstring: %s",tempstr);
        j++;
    }
    if (str[j]== symbol)
    {
        j++;
    }

}