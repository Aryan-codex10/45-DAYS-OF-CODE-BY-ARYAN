#include<stdio.h>
int main(){
    int battery;
    printf ("Enter Battery Percentage:");
    scanf ("%d", &battery);
    if(battery<=15) {
        printf("BATTERY LOW!!! PLUG IN THE CHARGER");
    }
    else {
        printf("BATTERY IS NOT LOW");
    }
    
    
    return 0;
}