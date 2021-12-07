//Write a c program to find out whether the character presses through the keyboard is a digit or not.
#include <stdio.h>
int main(int argc, char const *argv[]) {
  char a;
  printf("Enter A Character: ");
  scanf("%c",&a);
  if(a>='0'&&a<='9')
  {
    printf("It's A Digit\n");
  }
  else{
    printf("Not A Digit\n");
  }
  return 0;
}
