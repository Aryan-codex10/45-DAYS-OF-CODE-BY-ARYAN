#include<stdio.h>
int main(){
    int temp1,temp2,hot_water,cold_water;

    printf("Enter initial temperature of water present : ");
    scanf("%d",&temp1);

    printf("Enter final temperature of water desired : ");
    scanf("%d",&temp2);

    printf("Enter amount of hot water present : ");
    scanf("%d",&hot_water);

    printf("Enter amount of cold water present : ");
    scanf("%d",&cold_water);

    int temp_diff = temp2 - temp1;

    if(temp_diff >= 0 && temp_diff <= hot_water)
    printf("YES");
    else if(temp_diff < 0 && -(temp_diff) <= cold_water)
    printf("YES");
    else
    printf("NO");

    return 0;
}