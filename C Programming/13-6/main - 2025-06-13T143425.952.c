#include<stdio.h>//header file
#include<conio.h>//header file
void main()//main function
{
   
   int maths=75,sci=85,guj=67,hin=87,eng=56,total,avg;
   
   total = maths+sci+guj+hin+eng;
   
   printf("\n Total is : %d ",total);
       
   avg = total/5;

   printf("\n Percentage is : %d ",avg);    
    
    getch();//terminate the program
}    