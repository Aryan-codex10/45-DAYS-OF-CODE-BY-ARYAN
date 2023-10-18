#include<stdio.h>
int main(){
    int question,marks,reqd_marks;

    printf("Enter no. of questions in test : ");
    scanf("%d",&question);

    printf("Enter no. of marks each question carry : ");
    scanf("%d",&marks);

    printf("Enter no. of marks you desire to score : ");
    scanf("%d",&reqd_marks);

    if(reqd_marks>=0 && reqd_marks<=(question*marks) && reqd_marks%marks==0){
        printf("POSSIBLE");
    }
    else{
        printf("NOT POSSIBLE");
    }

    return 0;
}