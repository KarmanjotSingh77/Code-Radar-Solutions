#include <stdio.h>

int main() {
    char grd;
    scanf("%c",&grd);
    if (grd=='A') {
        printf("Excellent");
    } else if (grd=='B') {
        printf("Good");
    } else if (grd=='C') {
        printf("Average");
    } else if (grd=='D') {
        printf("Below Average");
    } else if (grd='F') {
        printf("Fail");
    } else {
        printf("Invalid grade");
    }
    return 0;
}