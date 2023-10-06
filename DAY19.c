#include<stdio.h>
int main(){
    int Pa;
    printf("Enter time reqd by P to solve problem A : ");
    scanf("%d",&Pa);

    int Pb;
    printf("Enter time reqd by P to solve problem B : ");
    scanf("%d",&Pb);

    int Qa;
    printf("Enter time reqd by Q to solve problem A : ");
    scanf("%d",&Qa);

    int Qb;
    printf("Enter time reqd by Q to solve problem B : ");
    scanf("%d",&Qb);
    
    int P_pen = (Pa > Pb) ? Pa : Pb;
    int Q_pen = (Qa > Qb) ? Qa : Qb; 

    if (P_pen > Q_pen){
        printf("Q won the game");
    } else if(Q_pen > P_pen){
        printf("P won the game");
    } else{
        printf("GAME TIE");
    }  
    
    return 0;
}