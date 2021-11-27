//Write a c program to find the volume and surface of sphere.
#define _USE_MATH_DEFINES
#include <stdio.h>
#include <math.h>
int main(int argc, char const *argv[]) {
  float radius;
  printf("Enter The Radius Of Sphere: ");
  scanf("%f",&radius);
  printf("The Surface Of Sphere Is: %.2f m^2\n",4*M_PI*pow(radius,2)); //surface
  printf("The Volume Of Sphere Is: %.3f m^3",(4*M_PI*pow(radius,3))/3); // volume
  return 0;
}
