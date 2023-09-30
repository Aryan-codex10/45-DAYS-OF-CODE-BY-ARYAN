#include<stdio.h>
int main(){
    int power;
    printf("Enter amt of power reqd each year : ");
    scanf("%d",&power);

    int years;
    printf("Enter no. of years energy reqd : ");
    scanf("%d",&years);

    int helium;
    printf("Enter amt of helium present at moon : ");
    scanf("%d",&helium);

    int extract;
    printf("Enter amt of power that can be extracted from 1 gram helium : ");
    scanf("%d",&extract);

    if(power * years <= helium * extract){
        printf("YES FUNDING FOR THE PROJECT WILL BE PROVIDED");
    } else{
        printf("NO FUNDING WILL BE PROVIDED FOR THE PROJECT");
    }
    
    
    return 0;
}