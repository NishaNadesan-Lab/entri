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
int alphabet[26] = {0};
int i, index, count = 0;
printf("Enter a string: ");
fgets(str, sizeof(str), stdin);
for (i = 0; str[i] != '\0'; i++)
{
if (str[i] >= 'A' && str[i] <= 'Z')
{
index = str[i] - 'A';
alphabet[index] = 1;
}
else if (str[i] >= 'a' && str[i] <= 'z')
{
index = str[i] - 'a';
alphabet[index] = 1;
}
}
for (i = 0; i < 26; i++)
{
if (alphabet[i] == 1)
{
count++;
}
}
if (count == 26)
{
printf("The string is a Pangram.\n");
}
else
{
printf("The string is not a Pangram.\n");
}
return 0;
}

