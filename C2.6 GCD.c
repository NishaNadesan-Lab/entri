/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

#include <stdio.h>
int gcd(int a, int b)
{
if (b == 0) 
{
  return a;
}
else 
{
  return gcd(b, a % b);
}
}
int main() 
{
int num1,num2,result;
printf("Enter two positive integers: ");
scanf("%d %d",&num1,&num2);
if(num1<=0||num2<=0)
{
 printf("Please enter positive integers.\n");
} 
else 
{
result = gcd(num1, num2);
printf("GCD of %d and %d is %d\n",
num1, num2, result);
}
return 0;
}