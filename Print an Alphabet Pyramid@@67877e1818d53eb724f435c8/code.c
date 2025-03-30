# include <stdio.h>
int main() {
    int n;scanf("%d",&n);
    for (int i=1;i<=n;i++) {
        int k=65;
        for (int j=1;j<=i;j++ ) {
            printf("%c ",k);
            k++;
        }
        printf("\n");
    }
    return 0;
}