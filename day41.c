#include<stdio.h>
int main(){
    int a, b, twice, time;

    printf("Enter movie's actual duration in minutes : ");
    scanf("%d",&a);

    printf("Enter number of minutes that you will watch at 2x (it should be an even number) : "); 
    scanf("%d",&b);

    twice = b / 2;

    time =(a - b) + twice;
    printf("The amount of time required for you to complete the movie is %d minutes",time);

    return 0;
}