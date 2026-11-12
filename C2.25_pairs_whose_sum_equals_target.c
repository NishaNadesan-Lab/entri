/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/


#include <stdio.h>
int main()
{
int a[100], n, i, j, target, found = 0;
printf("Enter the size of the array: ");
scanf("%d", &n);
if(n < 2 || n > 100)
{
printf("Enter a size between 2 and 100.\n");
return 0;
}
printf("Enter %d elements:\n", n);
for(i = 0; i < n; i++)
{
scanf("%d", &a[i]);
}
printf("Enter the target sum: ");
scanf("%d", &target);
printf("Pairs with sum %d are:\n", target);
for(i = 0; i < n - 1; i++)
{
for(j = i + 1; j < n; j++)
{
if((long long)a[i] + a[j] == target)
{
printf("(%d, %d)\n", a[i], a[j]);
found = 1;
}
}
}
if(found == 0)
{
printf("No pairs found.\n");
}
return 0;
}
