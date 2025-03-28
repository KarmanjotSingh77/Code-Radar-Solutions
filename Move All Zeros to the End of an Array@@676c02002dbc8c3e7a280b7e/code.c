# include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i=0;i,n;i++) {
        scanf("%d",&arr[i]);
    }
    int arr2[ ];
    int p=0;
    for (int j=0;j<n;j++) {
        if (arr[j]!=0) {
            arr2[p]=arr[j];
            p++;
        }
    }
    int a=sizeof(arr2)/sizeof(int);
    if (a!=n)  {
        int b=n-a;
        for (int k=a-1;k<n;k++) {
            arr2[k]=0;
        }
    }
    for (int i=0;i<n;i++) {
        printf("%d ",arr2[i]);
    }
    return 0;
}