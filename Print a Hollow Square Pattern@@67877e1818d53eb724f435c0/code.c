# include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    for (int i=1;i<=n;i++) {
        if (i=n/2) {
        for (int k=1;k<=i-1;k++) {
            printf(" ");
        }
        }
        for (int j=1;j<=n;j++) {
            if (i=n/2) {
        for ( int j=1;j<=1;j++) 
            printf("*");
        for (int j=2;j<=i-1;i++) 
        printf(" ");
        printf("*");
            } 
        else {
            for (int k=1;k<=n;k++) 
            printf("*");
        }
        printf("\n");    
    }
    return 0;
}