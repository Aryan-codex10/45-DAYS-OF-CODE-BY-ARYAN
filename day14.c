#include<stdio.h>
int minsteps(int stair, int climb){
if(stair % climb == 0){
        return stair / climb;
    } else{
        return (stair / climb) + 1;
    }   
}    
int main(){
    int stair;
    printf("Enter stair no. where you want to reach : ");
    scanf("%d",&stair);

    int climb;
    printf("Enter no. of stairs you can climb in one move: ");
    scanf("%d",&climb);
    
    int steps = minsteps(stair, climb);
    printf("Minimum steps required to reach your stair no. is %d",steps);
    
    
    return 0;
}