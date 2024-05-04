#include<stdio.h>

int main(){
    printf("------------- Menu -------------");
    int x;
    printf("\nEnter a number between 1 to 5 : ");
    scanf("%d", &x);

    //safeguarding 
    if(x < 0 || x > 5){
        printf("\nThe menu is not available. Exiting ..");
    }
   
    switch (x)
    {
        case 1:  
            printf("Momo : 200");
            break;
        case 2:
            printf("Chowmein - 150");
            break;
        case 3:
            printf("Thukpa - 250");
            break;
        case 4:
            printf("Khaja Set - 300");
            break;
        
        default:
            printf("\nSamosa - 50");
            break;
    }

    return 0;
}