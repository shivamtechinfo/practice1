//Write a C program to check whether a number is divisible by 5 and 11 or not.
#include<stdio.h>
int main() {
    int num;
    
    printf("Enter a number");
    scanf("%d", &num);

    if(num % 5 == 0 & num % 11 == 0){   // or if((num % 5 == 0) && (num % 11 == 0))
        printf("number %d is divisible by 5 and 11", num);
    } 
    else{
        printf("number %d is not divisible by 5 and 11", num);
    }

    return 0;
}