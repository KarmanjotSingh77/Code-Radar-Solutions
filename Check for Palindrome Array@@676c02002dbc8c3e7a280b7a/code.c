# include <stdio.h>
int main() {
    int count1=0,n;
    scanf("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++) {
        scanf("%d",&arr[i]);
    }
    for (int j=0;j<n;j++) {
        if (arr[j]==arr[n-1])
        count1=1;
        break;
    }
    if (count1) printf("YES");
    else printf("NO");
    return 0;
}