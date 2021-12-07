#include <stdio.h>
int main(int argc, char const *argv[]) {
  int itr;
  printf("Enter The Number Of Iteration : ");
  scanf("%d",&itr);

  for(int i =1;i<=itr;i++){
    for(int j=1;j<=i;j++){
      printf("%d",j);
    }
    printf("\n");
  }
  return 0;
}
