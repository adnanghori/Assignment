/*9. Four track stars have entered the mile race at the Indian Relays. write  a  c program that scans in the race time in minute and seconds for a runner and computes and display the speed in feet per second and in minute per second.(Hints there are 5280 feet in one mile and 1 kilometer equal 3282 feet)
*/
#include <stdio.h>
int main(int argc, char const *argv[]) {
  float trackStar_1,trackStar_2,trackStar_3,trackStar_4,time,mile,distance,speed;
  printf("Enter The Number Of Miles: ");
  scanf("%f",&mile);

  for(int i=1;i<=4;i++){
    printf("Enter Time For %d TrackStar :",i);
    if(i==1){
      scanf("%f",&trackStar_1);
      speed = mile/trackStar_1;
      printf("TrackStar's Speed In min/sec is :%f min/sec\n", speed );
      time=trackStar_1*60;
      distance = mile*5280;
      speed = distance/time;
      printf("TrackStar's Speed In feet/second is :%f feet/sec\n", speed );
}
    if(i==2){
      scanf("%f",&trackStar_2 );
      speed = mile/trackStar_2;
      printf("TrackStar's Speed In min/sec is :%f min/sec\n", speed );
      time=trackStar_1*60;
      distance = mile*5280;
      speed = distance/time;
      printf("TrackStar's Speed In feet/second is :%f feet/sec\n", speed );
    }
    if(i==3){
      scanf("%f",&trackStar_3 );
      speed = mile/trackStar_3;
      printf("TrackStar's Speed In min/sec is :%f min/sec\n", speed );
      time=trackStar_1*60;
      distance = mile*5280;
      speed = distance/time;
      printf("TrackStar's Speed In feet/second is :%f feet/sec\n", speed );
    }
    if(i==4){
      scanf("%f",&trackStar_4 );
      speed = mile/trackStar_4;
      printf("TrackStar's Speed In min/sec is :%f min/sec\n", speed );
      time=trackStar_1*60;
      distance = mile*5280;
      speed = distance/time;
      printf("TrackStar's Speed In feet/second is :%f feet/sec\n", speed );
    }
  }
  return 0;
}
