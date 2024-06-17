#include<stdio.h>
#include<conio.h>
void main()
{
float math_marks,science_marks,hindi_marks,english_marks,SST_marks,sum;
clrscr();
 printf("Enter marks in Maths:-\n");
 scanf("%f",&math_marks);
 printf("Enter marks in Science:-\n");
 scanf("%f",&science_marks);
 printf("enter marks in hindi:-\n");
 scanf("%f",&hindi_marks);
 printf("enter marks in english:-\n");
 scanf("%f",&english_marks);
 printf("enter marks in SST:-\n");
 scanf("%f",&SST_marks);
 sum=math_marks+science_marks+hindi_marks+english_marks+SST_marks;
 printf("The sum of all five subjects is %f\n",sum);
 printf("Percentage %f",sum/5);
 getch();
}