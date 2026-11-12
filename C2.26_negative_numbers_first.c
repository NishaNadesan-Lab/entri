/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/



#include <stdio.h>

int main()
{
int a[100], temp[100];
int n, i, j = 0;
printf("Enter the size of the array: ");
scanf("%d", &n);
if(n < 1 || n > 100)
{
printf("Invalid array size.\n");
return 0;
}
printf("Enter %d elements:\n", n);
for(i = 0; i < n; i++)
{
scanf("%d", &a[i]);
}
for(i = 0; i < n; i++)
{
if(a[i] < 0)
{
temp[j] = a[i];
j++;
}
}
for(i = 0; i < n; i++)
{
if(a[i] >= 0)
{
temp[j] = a[i];
j++;
}
}
printf("Rearranged array:\n");
for(i = 0; i < n; i++)
{
printf("%d ", temp[i]);
}
return 0;
}
