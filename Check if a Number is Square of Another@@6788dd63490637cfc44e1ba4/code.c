#include <stdio.h>

int main() {
    int num1,num2,num3;
    scanf("%d %d",&num1,&num2);
    num3=num2*num2;
    if (num1==num3) {
        printf("Yes");
    } else {
        printf("No");
    }
    return 0;
}