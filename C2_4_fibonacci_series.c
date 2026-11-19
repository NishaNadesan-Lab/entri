/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

#include <stdio.h>
int main()
{
int n, i;
int first = 0, second = 1, next;
printf("Enter the number: ");
scanf("%d", &n);
if (n <= 0)
{
printf("series not available.\n");
} 
else if (n >50) 
{
printf("Please enter 50 terms or fewer.\n");
} 
else 
{
printf("Fibonacci Series is:");
for (i = 1; i <= n; i++) 
{
printf("%d,", first);
 if (i < n)
 {
 next = first + second;
 first = second;
 second = next;
 }
}
printf("\n");
}
return 0;
}