/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

#include <stdio.h>
int main()
{
char str[200];
int i, j = 0;
printf("Enter a string: ");
fgets(str, sizeof(str), stdin);
for (i = 0; str[i] != '\0'; i++)
{
if (str[i] != ' '||(j > 0 && str[j - 1] != ' '))
{
str[j] = str[i];
j++;
}
}
str[j] = '\0';
printf("String after removing extra spaces: %s", str);
return 0;
}
