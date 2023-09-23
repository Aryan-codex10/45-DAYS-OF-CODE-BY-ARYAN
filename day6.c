#include <stdio.h>

int main() {
    int N;
    
    printf("Enter the number of friends: ");
    scanf("%d", &N);

    int cars_required = (N + 3) / 4;

    printf("Minimum number of cars required: %d\n", cars_required);

    return 0;
}
