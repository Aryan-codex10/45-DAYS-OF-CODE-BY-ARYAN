#include <stdio.h>

int main() {
    int X, Y; 
    int numPeople; 

    printf("Enter the capacity of the geyser (X litres): ");
    scanf("%d", &X);

    printf("Enter the capacity of the bucket (Y litres): ");
    scanf("%d", &Y);

    numPeople = (X / (2 * Y));

    printf("Maximum number of people who can take a bath: %d\n", numPeople);

    return 0;
}
