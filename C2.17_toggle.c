/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

#include <stdio.h>

int main()
{
unsigned int num;
int pos, n, i;
printf("Enter a number: ");
scanf("%u", &num);
printf("Enter starting bit position: ");
scanf("%d", &pos);
printf("Enter number of bits to toggle: ");
scanf("%d", &n);
if (pos < 0 || n < 0 || pos + n > 32)
{
printf("Invalid bit position or count\n");
return 1;
}
for (i = pos; i < pos + n; i++)
{
num ^= (1U << i);
}
printf("Number after toggling = %u\n", num);
return 0;
}
