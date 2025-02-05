#include <stdio.h>

int main() {
    int num1,num2,num3;
    char oprtr;
    scanf("%d %d %c",&num1,&num2,&oprtr);
    if (oprtr=='+') {
        num3=num1+num2;

    } else if (oprtr=='-') {
        num3=num1-num2;
    } else if (oprtr=='*') {
        num3=num1*num2;
    } else if (oprtr=='/') {
        num3=num1/num2;
    } 
    printf("%d",num3);
    return 0;
}