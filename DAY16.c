#include<stdio.h>

int main(){

    int candies;
    printf("Enter no. of candies : ");
    scanf("%d",&candies);

    int friends;
    printf("Enter no. of friends : ");
    scanf("%d",&friends);

    if(candies % friends == 0 && (candies / friends) % 2 == 0){
        printf("YES!!!! YOU CAN DISTRIBUTE THE CANDIES");
    } else{
        printf("NO!!!!! YOU CANNOT DISTRIBUTE THE CANDIES");
    }
    
    return 0;
}