#include<stdio.h>
#include<stdlib.h>
int main(){
    int vol;
    printf("Enter current volume of TV : ");
    scanf("%d",&vol);

    int new_vol;
    printf("Enter volume you want : ");
    scanf("%d",&new_vol);

    int min_button = abs(new_vol - vol);
    printf("The least number of button presses reqd are %d",min_button);

    return 0;
}