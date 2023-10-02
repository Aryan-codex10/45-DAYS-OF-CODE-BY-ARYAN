#include<stdio.h>

int main(){
    int cards;
    printf("Enter total no. of cards : ");
    scanf("%d",&cards);

    int faceup;
    printf("Enter no. of cards which are face up : ");
    scanf("%d",&faceup);

    int facedown = cards - faceup;
    

    if(faceup > facedown){
        printf("You should turn %d face down cards to face up",facedown);
    } else{
        printf("You should turn %d faceup cards to face down",faceup);
    }
    
    return 0;
}