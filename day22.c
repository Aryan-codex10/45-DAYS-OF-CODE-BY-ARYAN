#include<stdio.h>
int main(){
    printf("HI THIS PROGRAM WILL HELP YOU TO FIND THE MAGNITUDE OF AN ANGLE OF A TRIANGLE WHERE 2 ANGLES ARE ALREADY KNOWN \n PRESS ENTER TO PROCEED\n");
    int angle;
    printf("Enter an angle : ");
    scanf("%d", &angle);

    int angle_1;
    printf("Enter second angle : ");
    scanf("%d", &angle_1);

    int angle_2 = 180 - (angle + angle_1);
    printf("The magnitude of angle which you want to find in the triangle is %d", angle_2);
    
    return 0;
}