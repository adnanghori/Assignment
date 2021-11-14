/*
2. Write a c program, to input a integer number and display its equivalent octal ,hexadecimal and decimal value .
*/
#include <stdio.h>
int main(int argc, char const *argv[]) {
  int number;
  printf("Enter A Number: ");
  scanf("%d",&number);
  printf("Decimal Number Is: %d\n",number);
  printf("Octal Number Is: %o\n",number);
  printf("HexaDecimal Number Is: %x\n",number);
  printf("HexaDecimal Number Is: %X\n",number);
  return 0;
}
