#include<stdio.h>
int main(){
    int alice;
    printf("Enter rupees Alice will contribute : ");
    scanf("%d",&alice);

    int bob;
    printf("Enter rupees Bob will contribute : ");
    scanf("%d",&bob);

    int charlie;
    printf("Enter rupees Charlie will contribute : ");
    scanf("%d",&charlie);
    
    int netflix;
    printf("Enter the cost of Netflix subscription : ");
    scanf("%d",&netflix);

    if(netflix <= alice + bob){
        printf("Alice and Bob can buy the subscription together\n");
    }
    if(netflix <= alice + charlie){
        printf("Alice and Charlie can buy the subscription together\n");
    }
    if(netflix <= bob + charlie){
        printf("Bob and Charlie can buy the subscription together\n");
    }
    else{
        printf("No two people can buy the subscription together");
    }
    return 0;
}
