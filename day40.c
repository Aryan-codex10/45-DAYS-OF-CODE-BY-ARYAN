#include<stdio.h>
int main(){
    int on,off,ondis;

    printf("Enter price of online food : ");
    scanf("%d",&on);
    printf("Enter price of offline food : ");
    scanf("%d",&off);

    ondis = on - (on * 10) / 100;
    if(ondis < off)
    printf("ONLINE");
    else if (ondis == off)
    printf("EITHER OF THEM");
    else
    printf("OFFLINE");



    return 0;
}