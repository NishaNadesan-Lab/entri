/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

#include <stdio.h>
float add(float a, float b)
{
return a + b;
}
float subtract(float a, float b)
{
return a - b;
}
float multiply(float a, float b)
{
return a * b;
}
float divide(float a, float b)
{
if(b==0)
{
printf("Error: Division by zero!\n");
return 0;
}
return a/b;
}
float calculate(float a, float b, char op)
{
switch(op)
{
case '+':
return add(a, b);
case '-':
return subtract(a, b);
case '*':
return multiply(a, b);
case '/':
return divide(a, b);
default:
printf("Invalid operator!\n");
return 0;
}
}
int main()
{
float num1, num2, result;
char op;
printf("Enter first number: ");
scanf("%f", &num1);
printf("Enter an operator (+, -, *, /): ");
scanf(" %c", &op);
printf("Enter second number: ");
scanf("%f", &num2);
if (op != '+' && op != '-' &&
op != '*' && op != '/')
{
printf("Invalid operator!\n");
return 1;
}
if (op == '/' && num2 == 0)
{
divide(num1, num2);
return 1;
}
result = calculate(num1, num2, op);
printf("Result = %.2f\n", result);
return 0;
}
