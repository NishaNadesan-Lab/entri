/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/


#include <stdio.h>

int main()
{
int num, i = 0, j, temp;
char str[20], ch;
printf("Enter an integer: ");
scanf("%d", &num);
temp = num;
if (num == 0)
{
str[i++] = '0';
} 
else
{
if (num < 0)
{
str[i++] = '-';
temp=-temp;
}
do 
{
str[i++] = '0' + (temp % 10);
temp = temp / 10;
} 
while (temp != 0);
}
str[i] = '\0';
j = (num < 0) ? 1 : 0;
i--;
while (j < i)
{
ch = str[j];
str[j] = str[i];
str[i] = ch;
j++;
i--;
}
printf("Converted string: %s\n", str);
return 0;
}
