#include <stdio.h>

int main() {
    int age,ctzp;
    scanf("%d %d",&age,&ctzp);
    if (age>=18 && ctzp==1) {
        printf("Eligible");
    } else {
        printf("Not Eligible");
    }
    return 0;
}