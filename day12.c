#include<stdio.h>

int main(){
     int speed;
     printf("Enter speed of bullet : ");
     scanf("%d",&speed);

     int distance;
     printf("Enter distance of goomba from you : ");
     scanf("%d",&distance);

     int time;
     printf("Enter the time at which you want the bullet to hit the goomba : ");
     scanf("%d",&time);

     int shoot_time = distance / speed ;
     if (shoot_time < time){
        printf("You should shoot after %d",time - shoot_time);
      }
      else{
        printf("Situation provided is not practical to be done in real life");
      }
    return 0;
}