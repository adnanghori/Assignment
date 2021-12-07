/*
. Write a program to find that the accepted number is positive negative or zero.using ternary
operator.
*/
#include <stdio.h>
int main(int argc, char const *argv[]) {
  int number;
  printf("Enter a number : ");
  scanf("%d",&number);
  (number>0)?(printf("%d is positive\n",number)):((number<0)?(printf("%d is negative",number)):printf("%d is zero",number));
  return 0;
}
