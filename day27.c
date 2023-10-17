#include<stdio.h>
int main(){
    int gift,choco,price;
    printf("Enter no. of chocolates you want to gift : ");
    scanf("%d",&gift);

    printf("Enter no. of chocolates you have : ");
    scanf("%d",&choco);

    printf("Enter price of one chocolate : ");
    scanf("%d",&price);

    int money = (gift - choco) * price;
    printf("The amount of money required to buy the remaining chocolates is : %d ",money);
    
    return 0;
}