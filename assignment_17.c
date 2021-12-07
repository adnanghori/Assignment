/*
write a c program to check whether the donor is eligible or not for donating blood conditions are:
1 age should be above 18 but not more than 55
2 weights should be more than 45kg
*/

#include <stdio.h>
int main(int argc, char const *argv[]) {
  int age;
  float weight;
  printf("Enter The Age: ");
  scanf("%d",&age);
  printf("Enter The Weight: ");
  scanf("%f",&weight);

   if(age>18&&age<=55){
     if(weight>45){
       printf("Eligible\n");
     }
       else{
         printf("Not Eligible\n");
       }
   }
     else{
       printf("Not Eligible\n");
     }

  return 0;
}
