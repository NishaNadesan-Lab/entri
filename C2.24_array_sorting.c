/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/


#include <stdio.h>
int main()
{
int a[100], b[100], c[200];
int n1, n2, i, j, k;
printf("Enter the size of first array: ");
scanf("%d", &n1);
if(n1 < 1 || n1 > 100)
{
printf("Invalid array size.\n");
return 0;
}
printf("Enter %d sorted elements:\n", n1);
for(i = 0; i < n1; i++)
{
scanf("%d", &a[i]);
}
printf("Enter the size of second array: ");
scanf("%d", &n2);
if(n2 < 1 || n2 > 100)
{
printf("Invalid array size.\n");
return 0;
}
printf("Enter %d sorted elements:\n", n2);
for(i = 0; i < n2; i++)
{
scanf("%d", &b[i]);
}
i = 0;
j = 0;
k = 0;
while(i < n1 && j < n2)
{
if(a[i] <= b[j])
{
c[k] = a[i];
i++;
}
else
{
c[k] = b[j];
j++;
}
k++;
}
while(i < n1)
{
c[k] = a[i];
i++;
k++;
}
while(j < n2)
{
c[k] = b[j];
j++;
k++;
}
printf("Merged sorted array:\n");
for(i = 0; i < k; i++)
{
printf("%d ", c[i]);
}
return 0;
}
