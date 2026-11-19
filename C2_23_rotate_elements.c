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
int size, n, i, direction;
printf("Enter the size of the array: ");
scanf("%d", &size);
if(size < 1 || size > 100)
{
printf("Invalid array size.\n");
return 0;
}
printf("Enter %d elements:\n", size);
for(i = 0; i < size; i++)
{
scanf("%d", &a[i]);
}
printf("Enter number of positions to rotate: ");
scanf("%d", &n);
if(n < 0)
{
printf("Enter a non-negative rotation count.\n");
return 0;
}
printf("Enter direction (1-Left, 2-Right): ");
scanf("%d", &direction);
n = n % size;
if(direction == 1)
{
for(i = 0; i < size; i++)
{
temp[i] = a[(i + n) % size];
}
}
else if(direction == 2)
{
for(i = 0; i < size; i++)
{
temp[(i + n) % size] = a[i];
}
}
else
{
printf("Invalid direction.\n");
return 0;
}
printf("Array after rotation:\n");
for(i = 0; i < size; i++)
{
printf("%d ", temp[i]);
}
return 0;
}
