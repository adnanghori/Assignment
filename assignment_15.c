/*
Write a c program which takes previous and current meter readings of an electrical meter. On
the basis of these two readings it calculates units consumed and prints the payable amount,
considering that per unit cost is Rs 4.45.
*/
#include <stdio.h>
#define COST 4.45
int main(int argc, char const *argv[]) {
  int previousReading,currentReading;
  float payableAmount;

  printf("Enter the previous month readings: ");
  scanf("%d",&previousReading);
  printf("Enter the current month readings: ");
  scanf("%d",&currentReading);
  payableAmount =(currentReading-previousReading)*COST;
  printf("Payable Amount Is %.3f\n",payableAmount);
  return 0;
}
