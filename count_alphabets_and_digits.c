/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
  char str[100];
  int alphaCount=0;
  int digiCount=0;
  int vowelCount=0;
  printf("Enter a string:");
  fgets(str,sizeof(str),stdin);
  for(int i=0;str[i]!='\0';i++)
  {
      int ascii=(unsigned char)str[i];
      if ((ascii>=65&&ascii<=99)||(ascii>=97&&ascii<=122))
      {
          alphaCount++;
      }
      if (ascii==65||ascii==69||ascii==73||ascii==79||ascii==85)
      {
          vowelCount++;
          }
          else if(ascii>=48&&ascii<=57)
      {
          digiCount++;
      }
  }
   printf("Number of alphabets is %d\n",alphaCount);
   printf("Number of digits is %d\n",digiCount);
   printf("Number of vowels is %d\n",vowelCount);
 
    return 0;
}
