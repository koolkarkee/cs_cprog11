#include<stdio.h>

int main(){
    int i;
    for(i = 1; i <= 100; i++){
        printf("%d\t", i);
    } 

    //print squares of numbers from 1 to n
    int n;
    printf("\nEnter the value of n: ");
    scanf("%d", &n);
    printf("\n");

    int sum = 0;
    int sum_cube = 0;
    for (i = 1; i <= n; i++)
    {
        int square = i * i; 
        int cube = i * i * i;
        printf("%d*%d = %d\n", i, i, square);

        sum = sum + square;
        sum_cube = sum_cube + cube;
    }
    
    printf("\nThe sum of %d squares is %d", n, sum);
    printf("\nThe sum of %d cubes is %d", n, sum_cube);

    return 0;
}