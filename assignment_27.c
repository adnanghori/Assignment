/*
.Write C program to print following series….
 4, 36, 324, 2916   ,…
*/
#include <stdio.h>
int main(int argc, char const *argv[]) {
    int itr,number=4;
    printf("Enter Number Of Iteration: \n");
    scanf("%d",&itr);
    for(int i=1;i<=itr;i++){
      printf("%d\t",number);
      number=number*9;
    }
      return 0;
}
