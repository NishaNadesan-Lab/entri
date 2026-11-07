/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

#include <stdio.h>
#include <string.h>
int main()
{
char str[100], temp;
int i, len;
printf("Enter a string: ");
fgets(str, sizeof(str), stdin);
len = strlen(str);
if (len > 0 && str[len - 1] == '\n')
{
str[--len] = '\0';
}
for (i = 0; i < len / 2; i++)
{
temp = str[i];
str[i] = str[len - i - 1];
str[len - i - 1] = temp;
}
printf("Reversed string: %s\n", str);
return 0;
}
