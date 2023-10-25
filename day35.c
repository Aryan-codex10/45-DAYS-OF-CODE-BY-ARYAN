#include<stdio.h>
int main(){

    int pieces;
    printf("Enter no. of pieces you want : ");
    scanf("%d",&pieces);

    if (pieces % 2 == 0 || pieces == 1)
    printf("YES");
    
    else
    printf("NO");

    return 0;
}