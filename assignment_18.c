/*
3.write a c program to print the given 3 integers in ascending orders using if and else.
*/


#include<stdio.h>

 int main(int argc, char const *argv[]) {
  int a=10,b=97,c=1;

  if((a>=b)&&(a>=c))
  {
      if(b>=c)
      {

          printf("\n Ascending order : %d %d %d",c,b,a);
      }
      else
      {

          printf("\n Ascending order : %d %d %d",b,c,a);
      }
  }
  else if((b>=a)&&(b>=c))
  {
      if(a>=c)
      {

          printf("\n Ascending order : %d %d %d",c,a,b);
      }
      else
      {

          printf("\n Ascending order : %d %d %d",a,c,b);
      }
  }
  else if((c>=a)&&(c>=b))
  {
      if(a>=b)
      {

          printf("\n Ascending order : %d %d %d",b,a,c);
      }
      else
      {

          printf("\n Ascending order : %d %d %d",a,b,c);
      }
  }
  return 0;
} 
