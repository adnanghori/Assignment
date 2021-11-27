/*
Write a c program that computes the duration of projectile’s flight and its height above the
ground when it reaches the target .
Inputs are : theta,distance ,velocity all are double type.
Output : time,height
(formula :
time=distance/velocity X cos(theta)
height=velocity X sin(theta ) X time-(g X time2)/2

g gravitational constant =32.17

*/
#include <stdio.h>
#include <math.h>
int main(int argc, char const *argv[]) {
  double theta , distance , velocity , time,height;

  const float gravitationalConstant = 32.17;

  printf("Enter The velocity : " );
  scanf("%lf", &velocity);
  printf("Enter The Distance : " );
  scanf("%lf", &distance);
  printf("Enter The theta : " );
  scanf("%lf", &theta);
  time = (distance/velocity)*cos(theta);
  printf("Time duration of projectile's flight is %.3lf\n",time); // time
  height= (gravitationalConstant*pow(time,2)/2)-velocity*sin(theta)*time;
  printf("Height of projectile's flight is %.3lf",height);

  return 0;
}
