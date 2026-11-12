/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

unsigned char setBit( unsigned char number, int position) {
return (number| (1 <<position));
}

unsigned char clearBit(unsigned char number, int position) {
return (number & (~(1 <<position)));
}

unsigned char toggleBit(unsigned char number, int position) {
return (number ^ (1 << position));
}

int main(){
    unsigned char number= 9;
    printf("value after setting the %d th bit: %d\n", 2,setBit(9,2));
    printf("value after clearing the %d th bit: %d\n", 5,clearBit(9,5));
    printf("value after toggling the %d th bit: %d\n", 0,toggleBit(9,0));
  
    return 0;
}
   
