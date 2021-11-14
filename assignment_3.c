/*
3. Write a c program which accepts purchase amount and calculate discount @7.5% .it should print net payable amount.
*/
#include <stdio.h>
int main(int argc, char const *argv[]) {
  int amount;
  printf("Enter purchase amount:");
  scanf("%d", &amount);
  amount-= amount*(7.5/100);
  printf("Payable Net Amount: %d\n", amount);
  return 0;
}
