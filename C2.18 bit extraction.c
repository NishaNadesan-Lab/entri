/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/


#include <stdio.h>

int main()
{
unsigned int num, result, mask;
int pos, n;
printf("Enter a number: ");
scanf("%u", &num);
printf("Enter starting bit position: ");
scanf("%d", &pos);
printf("Enter number of bits to extract: ");
scanf("%d", &n);
if (pos < 0 || pos >= 32 || n <= 0 || n > 32 - pos)
{
printf("Invalid bit position or count\n");
return 1;
}
mask = (n == 32) ? ~0U : (1U << n) - 1;
result = (num >> pos) & mask;
printf("Extracted value = %u\n", result);
return 0;
}
