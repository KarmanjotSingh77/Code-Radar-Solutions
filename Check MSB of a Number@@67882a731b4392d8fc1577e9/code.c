// Your code here...
# include <stdio.h>
int main() {
    int num,strange;
    scanf("%d",&num);
    strange=1 << (sizeof(int)*8-1);
    if (num & strange) {
        printf("Set");
    } else {
        printf("Not Set");
    }
    return 0;
}