#include<stdio.h>
void mystrcat(char* str1, char* str2);
int main()
{
    char fname[10],lname[10],full[20];
    //int i,j;
    printf("Enter your Firstname and then Lastname :");
    scanf("%s%s",fname,lname);

    mystrcat(fname, lname);   
}

void mystrcat(char* str1, char* str2)
{   
    int i,j;
    char fullname[20];
    for (i = 0; str1[i] != '\0'; i++)
    {
        fullname[i] = str1[i];
    }

    for ( j = 0; str2[j] != '\0'; j++)
    {   
        fullname[i] = str2[j];
        i++;
    }
    fullname[i] = '\0';
    printf("\nFullname: %s", fullname);  


}