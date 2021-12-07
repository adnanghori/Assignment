/*
Compare 3 Numbers using ternary operator and print biggest no.
*/
#include <stdio.h>
int main(int argc, char const *argv[]) {
  int n1 , n2 , n3 , result;
  printf("Enter The Three Numbers: \n");
  scanf("%d %d %d",&n1, &n2, &n3);
  result = n1 > n2 ? ( n1 > n3 ? n1 : n3) : (n2 > n3 ? n2 : n3) ;
  printf("Biggest Number Is : %d",result);
  return 0;
}
