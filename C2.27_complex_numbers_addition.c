/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/



#include <stdio.h>
struct Complex
{
float real;
float imag;
};
struct Complex add(struct Complex c1, struct Complex c2)
{
struct Complex sum;
sum.real = c1.real + c2.real;
sum.imag = c1.imag + c2.imag;
return sum;
}
void display(struct Complex c)
{
if(c.imag >= 0)
{
printf("%.2f + %.2fi\n", c.real, c.imag);
}
else
{
printf("%.2f - %.2fi\n", c.real, -c.imag);
}
}
int main()
{
struct Complex c1, c2, result;
printf("Enter real and imaginary parts of first complex number: ");
scanf("%f %f", &c1.real, &c1.imag);
printf("Enter real and imaginary parts of second complex number: ");
scanf("%f %f", &c2.real, &c2.imag);
result = add(c1, c2);
printf("First complex number: ");
display(c1);
printf("Second complex number: ");
display(c2);
printf("Sum of complex numbers: ");
display(result);
return 0;
}
