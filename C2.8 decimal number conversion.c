/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
void convertBase(int num, int base, char result[])
{
char digits[] = "0123456789ABCDEF";
char temp[50];
int i=0,j=0;
long long n=num;
if(n<0)
{
n = -n;
}
if(n==0)
{
temp[i++]='0';
}
while(n>0)
{
int remainder=n%base;
temp[i++]=digits[remainder];
n = n/base;
}
if (num < 0)
{
result[j++] = '-';
}
while (i > 0) {
result[j++] = temp[--i];
}
result[j] = '\0';
}
int main() 
{
int num,base;
char result[50];
printf("Enter a decimal number: ");
scanf("%d", &num);
printf("Enter target base (2-16): ");
scanf("%d", &base);
if(base<2 || base>16)
{
printf("Invalid base! Enter base between 2 and 16.\n");
return 1;
}
convertBase(num, base, result);
printf("Converted number: %s\n", result);
return 0;
}