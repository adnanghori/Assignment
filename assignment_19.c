/*
write a c program to find average of best 3 marks from 4 test marks.
*/
#include <stdio.h>
int main(int argc, char const *argv[]) {
  float marks_1, marks_2 , marks_3 , marks_4;
  printf("Enter The Marks For First Test\n");
  scanf("%f",&marks_1);

  printf("Enter The Marks For Second Test\n");
  scanf("%f",&marks_2);

  printf("Enter The Marks For Third Test\n");
  scanf("%f",&marks_3);

  printf("Enter The Marks For Fourth Test\n");
  scanf("%f",&marks_4);

  if(marks_1>=marks_2&&marks_1>=marks_3&&marks_4){
    if(marks_2>=marks_3&&marks_2>=marks_4){
      if(marks_3>=marks_4){
        printf("%.2f\n",(marks_1+marks_2+marks_3)/3);
      }
    }
  }
  else{

  }

    return 0;
}
