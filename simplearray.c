#include<stdio.h>

int main(){
    //array declaration 
    int i;
    int size = 20;
    int marks[size]; //marks is an integer array 
    for (i = 0; i < size; i++)
    {
        printf("%d ", marks[i]);
    }

    printf("\nFilling up the array \n");

    //fill up the array 
    marks[0] = 10;
    marks[1] = 20;
    marks[2] = 30;
    marks[3] = 40;
    marks[4] = 50;
    
    printf("\n");
    for (i = 0; i < size; i++)
    {
        printf("%d ", marks[i]);
    }

    //use loop to fill up the array 
    printf("\nUsing loop to assign values .. ");
    for (i = 0; i < size; i++)
    {
        marks[i] = 10*i;
    }
    
    printf("\nAfter assigning values .. ");
    for (i = 0; i < size; i++)
    {
        printf("%d ", marks[i]);
    }

    return 0;
}