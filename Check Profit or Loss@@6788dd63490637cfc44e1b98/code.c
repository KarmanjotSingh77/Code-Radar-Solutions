#include <stdio.h>

int main() {
    float cp,sp;
    scanf("%f %f",&cp,&sp);
    if (cp<sp) {
        printf("Profit");
    } else if (cp>sp) {
        printf("Loss");
    } else if (cp==sp) {
        printf("No Profit No Loss");
    }
    return 0;
}