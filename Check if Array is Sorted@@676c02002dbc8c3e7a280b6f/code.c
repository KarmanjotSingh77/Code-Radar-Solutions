# include <stdio.h>
int main() {
    int n,p=1;scanf("%d",&n);
    int a[n];
    for (int i=0;i<n;i++) {
        scanf("%d",&a[i]);
    }
    for (int j=0;j<n-1;j++) {
        if (a[j]>a[j+1]) 
        p=0;
    }
    if (p==0) printf("Not Sorted");
    else printf("Sorted");
    return 0;
}
        
    