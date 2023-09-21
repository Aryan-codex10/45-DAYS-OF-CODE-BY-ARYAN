#include<stdio.h>
#include<stdbool.h>
int main(){
    int marks;
    printf("Enter Marks");
    scanf("%d", &marks);
    if (marks>=90){
        printf("A Grade");
    }
    if (marks<90 && marks>=80){
        printf("B Grade");
    }
    else if (marks<80)
    {
        printf("Needs Improvement");
    }
    return 0;
}