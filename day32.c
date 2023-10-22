#include<stdio.h>
int main(){
    int weight,wt1,wt2,wt3;

    printf("Weight of object : ");
    scanf("%d",&weight);

    printf("Weight 1 : ");
    scanf("%d",&wt1);

    printf("Weight 2 : ");
    scanf("%d",&wt2);

    printf("Weight 3 : ");
    scanf("%d",&wt3);

    if(weight == wt1 + wt2 || weight == wt2+wt3 || weight == wt3 + wt1 || weight == wt1+wt2+wt3 || weight == wt1 || weight == wt2 || weight == wt3)
    printf("YES");
    else
    printf("NO");

    return 0;
}