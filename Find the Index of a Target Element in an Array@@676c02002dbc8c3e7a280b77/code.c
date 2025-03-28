# include <stdio.h>
int main() {
    int n,ind,cnt=1;
    scanf("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++) {
        scanf("%d",&arr[i]);
    }
    int num;
    scanf("%d",&num);
    for (int j=0;j<n;j++) {
        if (arr[j]==num) {
            ind=j;
            cnt=0;
        }
    }
    if (cnt=1) {
        ind=-1;
    }
    printf("%d",ind);
    return 0;
}