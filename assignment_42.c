#include <stdio.h>
int main(int argc, char const *argv[]) {
  int itr;
  printf("Enter The Number Of Iteration: ");

  scanf("%d",&itr);
  printf("\n" );
  for(int i=1;i<=itr;i++){
    for(int j=1;j<=i;j++){
      printf("*");
    }
    printf("\n");
  }
  return 0;
}
