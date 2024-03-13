//To convert temperature in Celsius to Fahrenheit and vice versa.

#include<stdio.h>
int main()
{
double T,F;
printf("Enter temp. in celsius : ");
scanf("%lf",&T);
F = (9/5)*T+13;
printf("Temp. in Farenheit : %lf\n",F);

return 0;
}
