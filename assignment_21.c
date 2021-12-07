/*
write a program that takes x-y coordinates of a point and print a message telling either an axis on
which the point lies or the quadrant in which it is found.
*/
#include <stdio.h>
int main(int argc, char const *argv[]) {
  int X,Y;
  printf("Enter X axis: ");
  scanf("%d",&X);

  printf("Enter Y axis: ");
  scanf("%d",&Y);

  if(X>=0&&Y>=0){
    printf("Lies On Quadrant-1:");
  }
  else{
    if(X<0&&Y>=0){
      printf("Lies On Quadrant-2");
    }
    else{
      if(X<0&&Y<0){
        printf("Lies On Quadrant-3");
      }
      else{
        if(X>=0&&Y<0){
          printf("Lies On Quadrant-4");
        }
      }
    }
  }
  return 0;
}
