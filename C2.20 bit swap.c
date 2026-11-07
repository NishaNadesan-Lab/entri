/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/



#include <stdio.h>
int main()
{
unsigned int num1, num2;
unsigned int bit1, bit2;
int pos, n, i;
printf("Enter first number: ");
scanf("%u", &num1);
printf("Enter second number: ");
scanf("%u", &num2);
printf("Enter starting bit position: ");
scanf("%d", &pos);
printf("Enter number of bits to swap: ");
scanf("%d", &n);
if (pos < 0 || pos >= 32 || n <= 0 || n > 32 - pos)
{
printf("Invalid bit position or count\n");
return 1;
}
for (i = pos; i < pos + n; i++)
{
bit1 = (num1 >> i) & 1U;
bit2 = (num2 >> i) & 1U;
if (bit1 != bit2)
{
num1 ^= (1U << i);
num2 ^= (1U << i);
}
}
printf("First number after swapping = %u\n", num1);
printf("Second number after swapping = %u\n", num2);
return 0;
}

