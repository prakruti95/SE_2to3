#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
  
    char name[50];
    char surname[50];
    
    printf("Enter Name: ");
    scanf("%s",&name);
    
    printf("Enter Surname: ");
    scanf("%s",&surname);
    
    printf("%s",strcat(name,surname));
    
    
    
 
    return 0;
}