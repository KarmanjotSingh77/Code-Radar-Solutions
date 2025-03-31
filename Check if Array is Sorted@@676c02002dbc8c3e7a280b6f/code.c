# include <stdio.h>
int main() {
    int n;scanf("%d",&n);
    int a[n];
    for (i=0;i<n;i++) {
        scanf("%d",&a[i]);
    }
    for (int j=0;j<n-1;j++) {
        int s=0;
        for (int k=0;k<n-i-1;k++) {
            if (a[k]>a[k+1]) {
                printf("Not Sorted");
                s=1;
            }
        }
        if (!s) printf("Sorted");
    }
    return 0;
}