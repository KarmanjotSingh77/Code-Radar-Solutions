#include <stdio.h>

int main() {
    char a;
    scanf("%c",&a);
    if (97<=a && a<=122) {
        printf("Lowercase");
    } else if (65<=a && a<=90) {
        printf("Uppercase");
    } else {
        printf("Not an alphabet");
    }
    return 0;
}