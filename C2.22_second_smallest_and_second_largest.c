/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/


#include <stdio.h>

int main()
{
int a[100], n, i;
int largest, smallest;
int secondLargest, secondSmallest;
int foundLargest = 0, foundSmallest = 0;
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
largest = smallest = a[0];
for(i = 1; i < n; i++)
{
if(a[i] > largest)
largest = a[i];
if(a[i] < smallest)
smallest = a[i];
}
for(i = 0; i < n; i++)
{
if(a[i] < largest)
{
if(foundLargest == 0 || a[i] > secondLargest)
{
secondLargest = a[i];
foundLargest = 1;
}
}
if(a[i] > smallest)
{
if(foundSmallest == 0 || a[i] < secondSmallest)
{
secondSmallest = a[i];
foundSmallest = 1;
}
}
}
if(foundLargest == 0 || foundSmallest == 0)
{
printf("All elements are the same.\n");
printf("Second largest and second smallest do not exist.\n");
}
else
{
printf("Second largest element = %d\n", secondLargest);
printf("Second smallest element = %d\n", secondSmallest);
}
return 0;
}
