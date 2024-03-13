/* Accept two numbers & find:
1. Sum
2. Difference
3. Product
*/

#include<stdio.h>

int main()
{
int num1,num2;

  printf("Enter the first number : ");
  scanf("%d", &num1);

  printf("Enter the second number : ");
  scanf("%d", &num2);

  printf("sum : %d\n", num1+num2);

  printf("Difference : %d\n", num1-num2);

  printf("Product : %d\n", num1*num2);

return 0;
}
