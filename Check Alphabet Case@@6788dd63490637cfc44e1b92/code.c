#include <stdio.h>

int main() {
    char a;
    scanf("%d",&a);
    if (97<=a && a<=122) {
        printf("Lowercase");
    } else {
        printf("Uppercase");
    }
    return 0;
}