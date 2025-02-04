#include <stdio.h>

int main() {
    char a;
    scanf("%c",&a);
    if (97<=a && a<=122) {
        printf("Lowercase");
    } else {
        printf("Uppercase");
    }
    return 0;
}