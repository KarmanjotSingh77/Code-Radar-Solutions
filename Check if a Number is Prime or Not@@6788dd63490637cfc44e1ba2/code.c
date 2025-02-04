#include <stdio.h>

int main() {
    int num;
    int count=0;
    scanf("%d",&num);
    for (int i=2; i<n;i++) {
        if (num%i==0) {
            count+=1;
        }
    }
    if (num==1 || num==2) {
        printf("Prime");
    } else if (num>2) {
        if (count>0) {
            printf("Prime");
        } else {
            printf("Not Prime");
        }
    }
    return 0;
}