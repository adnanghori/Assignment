/*
Write C program to print following series….
10, 22, 46, 94, 190,..

*/
#include <stdio.h>
int main(int argc, char const *argv[]) {
  int itr,number=10,difference=12;
  printf("Enter Number Of Iteration: ");
  scanf("%d",&itr);

  for(int i=1;i<=itr;i++)
  {
    printf("%d\t",number);
    number+=difference;
    for(int j=1;j<=i;j++){
      
    }
  }
  return 0;
}
