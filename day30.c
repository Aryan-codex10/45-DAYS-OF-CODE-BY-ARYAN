#include<stdio.h>
#include<stdlib.h>
int main(){
    int police,thief;
    printf("Enter position of police : ");
    scanf("%d",&police);
    printf("Enter position of thief : ");
    scanf("%d",&thief);

    int time = (thief - police) / 1;
    time = abs(time);
    printf("Time required to catch the thief is %d",time);
    
    return 0;
}