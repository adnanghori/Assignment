/*
5. Write a c program which accept basic pay and calculate and print DA and income tax amount .the DA is calculated as 150% of the pay and income tax is calculated 3% of the pay.

*/
#include <stdio.h>
int main(int argc, char const *argv[]) {
  int bpay,dearnessAllowance,incomeTax;
  printf("Enter The Basic Pay:");
  scanf("%d",&bpay);
  dearnessAllowance=bpay*150/100;
  printf("Dearness Allowance According To 150%% Is = %d\n",dearnessAllowance);
  incomeTax=bpay*3/100;
  printf("Income Tax According To 3%% is = %d\n",incomeTax);
  return 0;
}
