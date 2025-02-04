#include <stdio.h>

int main() {
    float temp;
    scanf("%f",&temp);
    if (temp<=0) {
        printf("Freezing");
    } else {
        printf("Above Freezing");
    }
    return 0;
}