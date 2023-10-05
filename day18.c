#include<stdio.h>
int main(){
    int alice;
    printf("Enter points of alice : ");
    scanf("%d",&alice);

    int bob;
    printf("Enter points of bob : ");
    scanf("%d",&bob);

    if (alice < 0 || alice > 7) {
        printf("Invalid Input");
        return 1; 
    }

    if (bob < 0 || bob > 7) {
        printf("Invalid Input");
        return 1; 
    }

    int charlie_alice = 7 - alice;
    int charlie_bob = 7 - bob;

    if(alice > bob){
        printf("Minimum points after which charlie can play are %d ",charlie_alice);
    }else{
        printf("Minimum points after which charlie can play are %d",charlie_bob);
    }
    
    return 0;
}