#include<stdio.h>
int main(){

    int a1,a2,a3,b1,b2,b3,c3;

    // a1 is import of country A
    // a2 is export of country  A
    // a3 are the net exports of country A
    // b1 is import of country B
    // b2 is export of country B
    // b3 are the net exports of country B
    // c3 are the net exports of countries A and B

    printf("Enter import of countyr A : ");
    scanf("%d",&a1);

    printf("Enter export of countyr A : ");
    scanf("%d",&a2);

    printf("Enter import of countyr B : ");
    scanf("%d",&b1);

    printf("Enter export of countyr B : ");
    scanf("%d",&b2);

    a3 = a2 - a1;
    b3 = b2 - b1;
    c3 = a3 + b3;

    if(c3 < 0)
    printf("Country C is in trade surplus");
    else
    printf("Country C is not in trade surplus");

    return 0;
}