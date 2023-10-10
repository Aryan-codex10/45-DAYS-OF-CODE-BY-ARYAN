#include<stdio.h>
int main(){
    //LEARNING TO USE SWITCH FUNCTION
    int day;
    printf("Enter day no. in between 1-7 : ");
    scanf("%d",&day);

    switch(day)
    {
        case 1:
        printf("Monday");
        break;

        case 2:
        printf("Tuesday");
        break;

        case 3:
        printf("Wednesday");
        break;

        case 4:
        printf("Thursday");
        break;

        case 5:
        printf("Friday");
        break;

        case 6:
        printf("Saturday");
        break;

        case 7:
        printf("Sunday");
        break;

        default:
        printf("WRONG INPUT PROVIDED ENTER NUMBER ACCORDING TO THE INTERVAL PROVIDED");
    }
    return 0;
}