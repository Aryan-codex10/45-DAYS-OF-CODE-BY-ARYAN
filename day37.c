#include<stdio.h>
int main(){
    int amt;
    printf("Enter amount to be paid : ");
    scanf("%d",&amt);

    int c5 = 0;
    int c10 = 0;

    while (amt >= 10){
        amt -= 10;
        c10++;
    } 

    while (amt >= 5){
        amt -= 5;
        c5++;
    }

    if (amt != 0)
        printf("-1\n");
    else{
        int total_coins = c5 + c10;
        printf("%d\n",total_coins); 
    }




    return 0;
}
