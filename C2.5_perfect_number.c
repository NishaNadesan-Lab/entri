/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int isPerfect(int num)
{
int i, sum = 0;
for (i=1;i<= num/2;i++) 
{
 if(num%i==0) 
 {
  sum = sum + i;
 }
}
if (sum==num && num>1)
{
return 1;
}
else
{
return 0;
}
}
int main()
{
int num;
printf("Enter a positive integer: ");
scanf("%d",&num);
if (num <= 0) 
{
printf("Not a positive integer.\n");
} 
else if (isPerfect(num))
{
printf("%d is a Perfect Number.\n",num);
} 
else 
{
printf("%d is not a Perfect Number.\n",num);
}
return 0;
}
