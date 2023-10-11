#include<stdio.h>
int main(){
    int a;
    printf("Enter first value : ");
    scanf("%d",&a);

    int b;
    printf("Enter second value : ");
    scanf("%d",&b);
    
    int result;

    char op;
    printf("Choose an operation : ");
    scanf(" %c",&op);

    switch (op) 
    {
        case '+':
        result = a + b;
        printf("The result is %d", result);
        break;

        case '-':
        result = a - b;
        printf("The result is %d", result);
        break;

        case '*':
        result = a * b;
        printf("The result is %d", result);
        break;

        case '/':
        result = a / b;
        printf("The result is %d", result);
        break;

        default:
        printf("WRONG INPUT PROVIDED");
    }  
    return 0;
}