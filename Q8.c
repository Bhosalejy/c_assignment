//Accept three intege numbers and find its average

#include<stdio.h>

int main()
{
int num1,num2,num3;

printf("Enter the first number : ");
scanf("%d", &num1);

printf("Enter the second number : ");
scanf("%d", &num2);

printf("Enter the third number : ");
scanf("%d", &num3);

printf("Average : %d\n ", (num1+num2+num3) / 3);


return 0;
}