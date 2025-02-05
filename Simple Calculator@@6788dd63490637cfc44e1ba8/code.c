#include <stdio.h>

int main() {
    float num1,num2,num3;
    char oprtr;
    scanf("%f %f %c",&num1,&num2,&oprtr);
    if (oprtr=='+') {
        num3=num1+num2;

    } else if (oprtr=='-') {
        num3=num1-num2;
    } else if (oprtr=='*') {
        num3=num1*num2;
    } else if (oprtr=='/') {
        if (num2==0) {
            printf("error");
        } else {
            num3=num1/num2;
        }
    } if (num2!=0) {
    printf("%.0f",num3);
    }
    return 0;
}