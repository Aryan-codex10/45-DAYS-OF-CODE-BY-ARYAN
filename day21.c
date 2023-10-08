#include<stdio.h>
int main(){
    int current_bal;
    printf("Enter current bank balance of bob : ");
    scanf("%d", &current_bal);

    int salary;
    printf("Enter salary of bob that gets deposited every month  : ");
    scanf("%d", &salary);

    int tax;
    printf("Enter tax deducted from bob's bank account : ");
    scanf("%d", &tax);

    int time;
    printf("Enter time period after which you want to know bob's bank details(in months) : ");
    scanf("%d", &time);

    int balance = current_bal + (salary - tax) * time;
    printf("Bob's bank balance after the given time period will be %d", balance);

    return 0;
}