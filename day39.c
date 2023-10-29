#include<stdio.h>
int main(){
    int alice,bob;
    printf("Enter points scored by alice : ");
    scanf("%d",&alice);

    printf("Enter points scored by bob : ");
    scanf("%d",&bob);

    if((alice + bob) % 4 < 2)
    printf("It's Alice's serve");
    else
    printf("It's Bob's serve");


    return 0;
}