# include <stdio.h>
void rev(int arr[],int start ,int end) {
    while (start<end) {
        int temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end++;
    }
}
int rot(int arr[],int n,int k) {
    k=k%n;
    rev(arr,0,n-1);
    rev(arr,0,k-1);
    rev(arr,k,n-1);

}
int main() {
    int n,k;scanf("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++) {
        scanf("%d",&arr[i]);
    }
    scanf(" %d",&k);
    rot(arr,n,k);
    for (int j=0;j<n;j++) {
        printf("%d ",arr[j]);
    }
    return 0;
}