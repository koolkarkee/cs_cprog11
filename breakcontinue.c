#include<stdio.h>

int main(){
    int i;
    for (i = 1; i <= 100; i++)
    {
        if(i % 10 == 0){
            continue;
        }
        else if(i == 81){
            break;
        }
        else{
           printf("%d  ", i); 
        }
    }
    
    for (i = 1; i <= 10; i++)
    {
        if(i == 5){
            break;
        }
        printf("\n%d", i);
    }
    

    return 0;
}