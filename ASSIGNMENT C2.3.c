/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int main()
{
int num,i;
unsigned int factorial = 1;
printf("Enter a positive numberer: ");
scanf("%d", &num);
if (num < 0) 
{
printf("Factorial is not possible\n");
}
else if (num >0) 
{
for (i = 1; i <= num; i++)
{
factorial = factorial * i;
}
 printf("Factorial of %d is %u\n", num, factorial);
}
return 0;
}