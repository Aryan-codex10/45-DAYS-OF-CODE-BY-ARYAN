#include<stdio.h>
int main(){
    int marks;
    printf("Enter marks obtained : ");
    scanf("%d",&marks);

    if (marks % 3 == 0) {
        printf("minimum 0 wrong question");
    }
    else if(marks % 3 == 1){
        printf("minimum 2 wrong questions");
    }
    else if(marks % 3 == 2){
        printf("minimum 1 wrong question");
    }
    else {
        printf("at least more than 2 questions are wrong ");
    }
    

    
    
    return 0;
}