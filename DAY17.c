#include<stdio.h>
int main(){

    int seat;
    printf("Enter seat number : ");
    scanf("%d",&seat);

    if (seat < 1 || seat > 30) {
        printf("Invalid Input");
        return 1; 
    }
    if (seat <= 15) {
        if (seat <= 10) {
            printf("Lower Double");
        } else {
            printf("Lower Single");
        }
    } else {
        if (seat <= 25) {
            printf("Upper Double");
        } else {
            printf("Upper Single");
        }
    }

    return 0;
}