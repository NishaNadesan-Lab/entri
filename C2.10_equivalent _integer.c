/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

#include <stdio.h>
int main()
{
char str[100];
int num=0, i=0;
printf("Enter a number as a string: ");
scanf("%99s", str);
while (str[i]!= '\0')
{
    if (str[i] <'0'||str[i] >'9')
    {
    printf("Invalid input! Enter digits only.\n");
    return 1;
    }
    num = num * 10 + (str[i] - '0');
    i++;
}
printf("Converted integer: %d\n", num);
return 0;
}
