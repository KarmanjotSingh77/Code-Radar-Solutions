# include <stdio.h>
int add(int num) {
    int temp=num,sum=0;
    while (temp>0) {
        int el=temp%10;
        sum+=el;
        temp=temp/10;
    }
    return sum;
}
int main() {
    int n;scanf("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++) {
        scanf("%d",&arr[i]);
    }
    for (int j=0;j<n;j++) {
        int check=add(arr[j]);
        arr[j]=check;
    }
    for (int k=0;k<n;k++) {
        printf("%d",arr[k]);
    }
    return 0;
}