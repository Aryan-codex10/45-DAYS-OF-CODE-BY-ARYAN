#include <stdio.h>
int main(){
    int num,min_age;
    printf("Enter number of people in the town :");
    scanf("%d",&num);
    printf("Enter minimum age to vote in the election : ");
    scanf("%d",&min_age);

    int count = 0;
    for (int i = 0; i < num; i++ ){
        int Ai;
        printf("Enter the age of th ith person in the town : ");
        scanf("%d",&Ai);
        if(Ai >= min_age){
        count++;
        }
    }
    printf("%d\n",count);

    return 0;
}