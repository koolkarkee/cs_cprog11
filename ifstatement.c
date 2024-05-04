#include<stdio.h>

int main(){
    int x = 5;
    if(x == 5){
        printf("\nTrue");
    }

    int y = 6;
    if(y == 6)
    {
        printf("\nThe value of y is 6.");
        printf("\nhello my name is khan");
    }
    else{
        printf("\nThe value of y is not 6.");
    }

    int z;
    printf("\nEnter the value of z : ");
    scanf("%d", &z);

    if(z == 6)
    {
        printf("\nThe value of z is 6."); 
    }
    else if(z < 6){
        printf("\nThe value of z is less than 6.");
    }
    else{
        printf("\nThe value of z is gretaer than 6.");
    }

    return 0;
}