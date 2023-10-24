#include<stdio.h>
int main(){
    int S,X,Y,Z,left;

    printf("Enter memory available in your phone : ");
    scanf("%d",&S);

    printf("Enter memory used by first app : ");
    scanf("%d",&X);

    printf("Enter memory used by second app : ");
    scanf("%d",&Y);

    printf("Enter memory size of app you want to install : ");
    scanf("%d",&Z);

    left = S - (X + Y);

    if (left >= Z)
    printf("0 \n");
    else if (left < Z)
    {
        if(left + X >= Z || left + Y >= Z)
        printf("1 \n");
        else
        printf("2 \n");
    }

   
    return 0;
}
