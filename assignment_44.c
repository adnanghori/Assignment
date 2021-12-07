#include <stdio.h>
#include <ctype.h>
int main(int argc, char const *argv[]) {
  int itr;
  printf("Enter Till Which Letter To Iterate: ");
  scanf("%c",&itr);


  for(char i ='A';i<=toupper(itr);i++){
    for(char j='A';j<=i;j++){
      printf("%c ",j);
    }
    printf("\n");
  }
  return 0;
}
