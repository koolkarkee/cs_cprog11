#include<stdio.h>

int main(){
    int size, i;
    printf("\nEnter the number of subjects: ");
    scanf("%d", &size);

    //array declaration
    int marks[size];

    //print before values assigned 
    for (i = 0; i < size; i++)
    {
        printf("%d\t", marks[i]);
    } 

    printf("\nNow assigning values : ");
    for (i = 0; i < size; i++)
    {
        printf("\nEnter the marks : ");
        scanf("%d", &marks[i]);
    }
    
    printf("\nNow array after : ");
    int total = 0;
    for (i = 0; i < size; i++)
    {
        total = total + marks[i];
        printf("%d\t", marks[i]);
    }

    float percentage = total/6;
    printf("\nTotal marks : %d", total);
    printf("\nPercentage : %f", percentage);
    return 0;
}