/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
void countDigits(int num,int freq[])
{
long long n=num;
if(n<0) 
{
n=-n;
}
if(n==0) 
{
freq[0]++;
}
while(n>0) 
{
int digit= n%10;
freq[digit]++;
n=n/10;
}
}
int main() 
{
int num,i;
int freq[10] = {0};
printf("Enter an integer: ");
scanf("%d",&num);
countDigits(num, freq);
printf("Digit Frequencies:\n");
for (i = 0; i < 10; i++) 
{
printf("Digit %d: %d times\n",i,freq[i]);
}
return 0;
}
