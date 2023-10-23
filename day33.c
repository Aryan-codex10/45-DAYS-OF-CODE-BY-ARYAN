#include<stdio.h>
int main(){
    int prepared,plates;

    printf("Enter no. of plates prepared : ");
    scanf("%d",&prepared);

    printf("Enter no. of plates eaten by each person : ");
    scanf("%d",&plates);

    int feeded = prepared / plates;
    
    if (feeded >= 20)
    printf("20\n");
    else
    printf("%d",feeded);


    return 0;
}