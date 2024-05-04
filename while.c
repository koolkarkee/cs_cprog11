#include<stdio.h>

int main(){
    int count = 1;

    //infinite loop demo
    // while(count <= 5){
    //     printf("\n%d", count);
    // }

    //finite loop
    while(count <= 5){
        printf("\n%d", count);
        count++;
    }

    printf("\n--------------------\n");
    //print odd numbers from 1 to 100
    count = 0;
    while(count < 100){
        if((count%2 == 0)){
            //odd
            printf("%d\t", count);
        } 

        count++;
    }
    return 0;
}