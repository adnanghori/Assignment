/*
Write a c program that calculate mass of air in an automobile tire using the formula
Pv=0.37M(T+460)
Where p : pressure
V :volume
M:mass of air
T: temperature
*/
#include <stdio.h>
int main(int argc, char const *argv[]) {
  float pressure,volume,mass,temperature;
  printf("Enter Pressure: ");
  scanf("%f",&pressure);
  printf("Enter Volume: ");
  scanf("%f",&volume);
  printf("Enter temperature: ");
  scanf("%f",&temperature);
  mass = (pressure*volume)/(temperature+460)*0.37;
  printf("Mass Of Air In Tire Is : %.3f", mass);
  return 0;
}
