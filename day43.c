#include<stdio.h>
int main(){
    int X,Y,D;

    printf("Enter skill of Team 1 : ");
    scanf("%d",&X);

    printf("Enter skill of Team 2 : ");
    scanf("%d",&Y);

    printf("Enter minimum skill difference reqd : ");
    scanf("%d",&D);

    if(X >= Y){
        if(D >= X - Y)
        printf("YES");
        else
        printf("NO");
    }
    if(Y > X){
        if(D >= Y - X)
        printf("YES");
        else
        printf("NO");        
    }

    return 0;
}