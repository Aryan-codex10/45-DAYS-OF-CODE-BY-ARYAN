#include<stdio.h>

int main(){
    
    int runs;
    printf("enter runs required to win the match: ");
    scanf("%d",&runs);

    int overs;
    printf("enter number of overs to chase the target: ");
    scanf("%d", &overs);

    int runs_per_over = 36;

    if(runs_per_over * overs > runs){
        printf("YES IT'S POSSIBLE TO WIN THE MATCH\n GO GIVE YOUR BEST");}
        else{
            printf("SORRY IT'S NOT POSSIBLE TO WIN THE MATCH");
        }
    

    return 0;
}