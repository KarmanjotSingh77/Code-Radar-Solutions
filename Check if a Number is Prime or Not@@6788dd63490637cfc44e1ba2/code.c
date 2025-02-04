#include <stdio.h>
#include <math.h>

int main() {
    int num,i,count=0;
    scanf("%d",&num);
    if (num==0 || num==1) {
        printf("Not Prime");
    } 
    for (i=2;i<=sqrt(num);++i) {
        if (num%i==0) {
            count=1;
            break;
        }
    }
    if (count==1) {
        printf("Not Prime");
    } else if (count==0) {
        printf("Prime");
    }
    return 0;
}