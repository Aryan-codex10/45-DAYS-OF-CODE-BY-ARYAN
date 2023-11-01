#include<stdio.h>
int main(){
    int N,M;
    printf("Enter no. of friends you want to gift the shoes : ");
    scanf("%d",&N);
    printf("Enter the number of left shoes you already have : ");
    scanf("%d",&M);
     
    if(N >= M)
    printf("No. of shoes you need to buy are %d",(N * 2) - M); 
    else
    printf("No. of shoes you need to buy are %d",N);



    return 0;
}
