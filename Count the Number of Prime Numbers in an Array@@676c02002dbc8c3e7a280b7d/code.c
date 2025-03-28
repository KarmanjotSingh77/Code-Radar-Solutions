# include <stdio.h>
int n;
int checkprime(int num) {
    int count=1;
    if (num<2) 
    count=0;
    else {
        for (int i=2;i*i<=num;i++) {
            if (num%i==0) {
            count=0;
            break;
            }
        }
    }
    return count;
}
int main() {
    int count1=0;
    scanf("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++) {
        scanf("%d",&arr[i]);
    }
    for (int i=0;i<n;i++) {
        if ( !checkprime(arr[i]) ) {
            count1+=1;
        }
    }
    printf("%d",count1);
    return 0;
}