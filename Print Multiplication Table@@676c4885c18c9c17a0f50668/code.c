// Your code here...
#include <stdio.h>
int main() {
    int num,multi;
    scanf("%d",&num);
    for (int i=1;i<=10;i++) {
        multi=num*i;
        printf("%d x %d = %d\n",num,i,multi);
    }
    return 0;
}