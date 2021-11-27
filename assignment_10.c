/*
Write a c program that uses printf function for give following output
Outpu1=_ _ _ _ _123456
Output2=123456_ _ _ _ _ _ +12
Output3=0000123456
Output4=_ _ _ _ _ _+00026.4
*/
#include <stdio.h>
int main(int argc, char const *argv[]) {
  for(int i =0;i<=4;i++){
    printf("_ ");
    if(i==4){
      for(int j=1;j<=6;j++){
        printf("%d",j); // output 1
      }
    }
  }
  printf("\n");
  for(int i=1;i<=6;i++){
    printf("%d",i); // output 2

  }
  printf("\n");
  for(int i=1;i<=4;i++){
    printf("0");
    if(i==4){
      for(int j=1;j<=6;j++){
        printf("%d",j); // output 3
      }
    }
  }
  printf("\n");
  for(int i=1;i<=6;i++){
    printf("_ "); //output 4
}
  return 0;
}
