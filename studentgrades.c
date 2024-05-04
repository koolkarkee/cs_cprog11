#include<stdio.h>

int main(){
    //A, A-, A+, B, B-, B+, C, C-, C+, D, F

    int marks;
    printf("\nPlease enter the marks of the students in percentage : ");
    scanf("%d", &marks);

    if(marks > 100){
        printf("\nError and exiting ...");
        return 0;
    }
    
    //grade evaluation 
    if(marks > 90 && marks <= 100){
        printf("\nGrade = A+");
    }
    else if(marks > 85 && marks <= 90){
        printf("\nGrade = A");
    }
    else if(marks > 80 && marks <= 85){
        printf("\nGrade = A-");
    }

    return 0;
}