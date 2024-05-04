#include<stdio.h>

int main(){
    //initialization 
    int count = 1;
    int sum = 0;
    int n;
    printf("\nEnter the number to which to be printed : ");
    scanf("%d", &n);

    //safeguarding 
    if(n < 2){
        printf("\nPlease enter a number greater than 1.");
    }
    else{
        while(count <= n){
            sum = sum + count;
            printf("\n%d\t", count);
            count++;

            printf("\nSum = %d", sum);
        }
        printf("\nThe sum of integers from 1 to %d is : %d", n, sum);
    }

    
    return 0;
}