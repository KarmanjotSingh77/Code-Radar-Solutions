# include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++) {
        scanf("%d",&arr[i]);
    }
    int p=0;
    for (int j=0;j<n;j++) {
        if (arr[j]!=0) {
            arr[p]=arr[j];
            p++;
        }
        while (p<n) {
            arr[p]=0;
            p++;
        }
    }
    for (int i=0;i<n;i++) {
        printf("%d ",arr2[i]);
    }
    return 0;
}