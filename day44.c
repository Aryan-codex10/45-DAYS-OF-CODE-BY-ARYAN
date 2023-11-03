#include<stdio.h>
int main(){
    int A,B;

    printf("Enter investment of first investor : ");
    scanf("%d",&A);

    printf("Enter investment of second investor : ");
    scanf("%d",&B);
    
    if((A * 100) / 10 > (B * 100) / 20)
    printf("FIRST");

    else if((A * 100) / 10 < (B * 100) / 20)
    printf("SECOND");
    
    else if((A * 100) / 10 == (B * 100) / 20)
    printf("ANY");

    return 0;
}