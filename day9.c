#include <stdio.h>

int main() {
    int rent, cost;
    printf("Enter the cost of renting per month : ");
    scanf("%d", &rent);
    printf("Enter the cost of purchasing : ");
    scanf("%d", &cost);

    if (rent >= cost) {
        printf("you should purchase the cooler since renting is not cost-effective");
    } else {
        int max_months = cost / rent;
        printf("you can rent the cooler for a maximum of %d months.\n", max_months);
    }

    return 0;
}