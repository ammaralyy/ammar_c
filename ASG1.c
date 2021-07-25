#include <stdio.h>

int main() {
 
    int input = 0;

    printf("Please enter a number to be reversed.\n");
    scanf("%d", &input);

    // with %
    printf("with %%.\n");
    if(input % 2 == 0){
        printf("the number is odd = 0.\n");
        printf("the number is even = 1.\n");
    }else{
        printf("the number is odd = 1.\n");
        printf("the number is even = 0.\n");
    }

    // without %
    printf("without %%.\n");
    if(input % 2 == 0){
            printf("the number is odd = 0.\n");
            printf("the number is even = 1.\n");
        }else{
            printf("the number is odd = 1.\n");
            printf("the number is even = 0.\n");
        }

    return 0;
 }