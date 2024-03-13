//Calculate Area and Perimeter of triangle


#include<stdio.h>
#include<math.h>
typedef enum choice{Area=1, perimeter}TR;

int main()
{
int a,b,c,res;
TR n1;
printf("1.Area :\n2.perimeter :\n Enter choice :\n");
scanf("%d",&n1);

printf("Enter side a : ");
scanf("%d", &a);

printf("Enter side b : ");
scanf("%d", &b);

printf("Enter side c : ");
scanf("%d", &c);

switch(n1)
{
case perimeter : res = a+b+(c*a)+b+c;
            printf("perimeter : %d\n",res);
			break;
case Area : int s = (a+b+c)/2;
     res = sqrt(s*(s-a)*(s-b)*(s-c));
            printf("Area : %d\n",res);
			break;
default : printf("Invalid operand \n");
}
  return 0;
  }
