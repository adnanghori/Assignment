/*
5. write a C program to calculate the commission of a salesman considering three regions X,Y and Z
depending on the sales amount as follows
(1) for area code X
Salse amount commission
<1000 10%
<5000 12%
>=5000 15%

(2)for area code Y
Salse amount commission
<1500 10%
<7000 12%
>=7000 15%

(3)for area code Z
Salse amount commission
<1200 10%
<6500 12%
>=6500 15%

*/
#include <stdio.h>
int main(int argc, char const *argv[]) {
  float X,Y,Z;
  int area;
  printf("Which Area's Sales Commission To calculate: \n 1. X \n 2. Y \n 3. Z\n");
  scanf("%d",&area);
switch (area) {
  case 1 : printf("Enter The Amount: ");
          scanf("%f",&X);
          if(X<1000){
            X=(X/100)*10;
            printf("Commission According To 10%% is %.2f\n",X);
          }
          else{
            if(X<5000){
              X=(X/100)*12;
              printf("Commision According To 12%% is %.2f\n",X);
            }
            else{
              if(X>=5000){
                X=(X/100)*15;
                printf("Commission According To 15%% is %.2f\n",X);
              }
            }
          }
  case 2 : printf("Enter The Amount: ");
          scanf("%f",&Y);
          if(Y<1500){
            Y=(Y/100)*10;
            printf("Commission According To 10%% is %.2f\n",Y);
          }
          else{
            if(Y<7000){
              Y=(Y/100)*12;
              printf("Commision According To 12%% is %.2f\n",Y);
            }
            else{
              if(Y>=7000){
                Y=(Y/100)*15;
                printf("Commission According To 15%% is %.2f\n",Y);
              }
            }
          }
  case 3 : printf("Enter The Amount: ");
          scanf("%f",&Z);
          if(Z<1200){
            Z=(Z/100)*10;
            printf("Commission According To 10%% is %.2f\n",Z);
          }
          else{
            if(Z<6500){
              Z=(X/100)*12;
              printf("Commision According To 12%% is %.2f\n",Z);
            }
            else{
              if(Z>=6500){
                Z=(Z/100)*15;
                printf("Commission According To 15%% is %.2f\n",Z);
              }
            }
          }
      }
  return 0;
}
