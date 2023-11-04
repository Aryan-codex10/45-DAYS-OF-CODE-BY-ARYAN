#include<stdio.h>
int main(){
    int N, X, D;

    printf("Enter number of buns in the mall : ");
    scanf("%d",&N);

    printf("Enter number of buns reqd by each family member : ");
    scanf("%d",&X);

    printf("Enter number of days they can survive without buns : ");
    scanf("%d",&D);

    printf("%d",N / (X * 5) + D);
    
    return 0;
}