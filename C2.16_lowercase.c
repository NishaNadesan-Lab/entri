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
int i;
printf("Enter a string: ");
fgets(str, sizeof(str), stdin);
for (i = 0;str[i] != '\0';i++)
{
if (str[i] >= 'A' && str[i] <= 'Z')
{
str[i] = str[i] + 32;
}
}
printf("String in lowercase: %s", str);
return 0;
}

