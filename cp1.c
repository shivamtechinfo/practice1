//sum of two number enter by user 
#include<stdio.h>
int main() {
    int num1, num2,sum;
    printf("Enter first number:");
    scanf("%d", &num1);

    printf("Enter second number:");
    scanf("%d", &num2);

    sum = num1 + num2;

    printf("sum of two number is :%d", sum);

    return 0;
}