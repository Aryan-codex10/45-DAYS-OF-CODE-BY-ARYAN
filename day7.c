#include<stdio.h>
int main(){

    int followers;
    printf("enter no. of followers ");
    scanf("%d",&followers);

    int following;
    printf("enter no. of following ");
    scanf("%d",&following);

    if (following> 10*followers){
    printf("spam account");
    }
    
    else{
        printf("not a spam account");
    }



    return 0;
}