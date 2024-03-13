/*
Print ASCII value of user entered character in decimal, hex, octal format and also print the
character for user entered ASCII value.
*/

#include<stdio.h>

int main()
{
 char ch;
 int n1;

    printf("Enter char : ");
	scanf("%c" , &ch);
	printf("n1 = %c ch = %d ch = %x ch = %o \n", n1,ch,ch,ch );

return 0;
}
