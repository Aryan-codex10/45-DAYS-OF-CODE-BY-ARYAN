#include <stdio.h>

int main() {
    int amount, cost;
    printf("Enter the amount of money you have : ");
    scanf("%d", &amount);
    printf("Enter the cost of 1 chocolate : ");
    scanf("%d", &cost);

    if (amount < cost) {
        printf("SORRY!!! You cant buy any chocolates work harder and earn more money to have a good relationship with your special one");
    } else {
        int num_of_chocolates = amount / cost;
        printf("HURRAY!!! YOU CAN BUY %d CHOCOLATES FOR YOUR SPECIAL ONE .\n", num_of_chocolates);
    }

    return 0;
}