# include <stdio.h>
int main() {
    int n;scanf("%d",&n);
    int a[n];
    for (int i=0;i<n;i++) {
        scanf("%d",&a[i]);
    }
    for (int j=0;j<n-1;j++) {
        int s=0;
        for (int k=0;k<n-j-1;k++) {
            if (a[k]>a[k+1]) {
        
                s=1;
                break;
            }
        }
        if (!s) printf("Sorted");
        else printf("Not Sorted");
    }
    return 0;
}