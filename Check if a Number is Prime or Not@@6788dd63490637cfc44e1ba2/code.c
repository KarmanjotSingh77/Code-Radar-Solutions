#include <stdio.h>

int main() {
    int num,i,count=0;
    scanf("%d",&num);
    if (num==0 || num==1) {
        count=1
    } 
    for (i=2;i<=num/2;++i) {
        if (num%i==0) {
            count=1;
            break;
        }
    }
    if (count=1) {
        printf("Not Prime");
    } else if (count=0) {
        printf("Prime");
    }
    return 0;
}