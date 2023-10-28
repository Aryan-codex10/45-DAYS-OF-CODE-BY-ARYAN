#include<stdio.h>
int main(){
    int days;
    printf("Enter no. of days you have till the halloween : ");
    scanf("%d",&days);

    int d_day = days / 7;
    if(days % 7 > 1){
        d_day++;
    }


    printf("Dracula can go to the restaurant before halloween %d times",d_day);
    

    

    return 0;
}