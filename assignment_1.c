#include <stdio.h>
int main(int argc, char const *argv[]) {
  int x,result,y,z;
  printf("Enter The Value Of :'x'\n");
  scanf("%d", &x);
  result = 2*(x*x*x)+2*(x*x*x*x);
  printf("a. x^2+2x^3(2x)=%d\n",result);
  printf("Enter The Value Of :'x'\n");
  scanf("%d", &x);
  printf("Enter The Value Of :'y'\n");
  scanf("%d",&y);
  printf("Enter The Value Of :'z'\n");
  scanf("%d",&z);
  result = (x)+(y*y)+(z*z*z);
  printf("b. x+y^2+z^3=%d\n",result);
  return 0;
  
}
