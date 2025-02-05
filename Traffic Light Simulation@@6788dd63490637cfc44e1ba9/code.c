#include <stdio.h>

int main() {
    char signl;
    scanf("%c",&signl);
    if (signl=='R') {
        printf("Stop");
    } else if (signl=='G') {
        printf("Go");
    } else if (signl=='Y') {
        printf("Slow Down");
    } else {
        printf("Invalid input");
    }
    return 0;
}