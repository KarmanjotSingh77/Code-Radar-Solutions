// Your code here...
# include <stdio.h>
int main() {
    int num1,num2,num3;
    scanf("%d %d",&num1,&num2);
    num3=num2>>num1;
    printf("%d",num3);
    return 0;
}