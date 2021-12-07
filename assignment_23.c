/*
8.Write a c program to evaluate

f(x) =
{
1 +
x
√1 + x
2
, if x < 0
0, if x = 0
1 −
x
√1 + x
2
if x > 0
*/
#include <stdio.h>
#include <math.h>
int main(int argc, char const *argv[]) {
  int x;
  double squareRoot, result[1];
   printf("Enter The Value Of x: ");
   scanf("%d",&x);
  if(x<0){
    printf("When x<0 \n");
    squareRoot=sqrt(1+pow(x,2));
    result[0] = (squareRoot+x)/squareRoot;
    result[1]= (squareRoot-x)/squareRoot;
    printf("f(x) When x<0 is : %lf , %d , %lf",result[0],0,result[1]);
  }
  else{
    if(x==0){
      printf("When x=0 \n");
      squareRoot=sqrt(1+pow(x,2));
      result[0] = (squareRoot+x)/squareRoot;
      result[1]= (squareRoot-x)/squareRoot;
      printf("f(x) When x=0 is : %lf , %d , %lf",result[0],0,result[1]);
    }
    else{
      if(x>0){
        printf("When x>0 \n");
        squareRoot=sqrt(1+pow(x,2));
        result[0] = (squareRoot+x)/squareRoot;
        result[1]= (squareRoot-x)/squareRoot;
        printf("f(x) When x>0 is : %lf , %d , %lf",result[0],0,result[1]);
      }
    }
  }
  return 0;
}
