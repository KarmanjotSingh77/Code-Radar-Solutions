#include <stdio.h>

int main()
{
    float num1,num2,num3;
    float avg;
    scanf("%d%d%d",&num1,&num2,&num3);
    avg=(num1+num2+num3)/3;
    printf("Average: %.2f",avg);
    return 0;
}