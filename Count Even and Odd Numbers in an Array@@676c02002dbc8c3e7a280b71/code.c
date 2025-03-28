# include <stdio.h>
int main() {
    int num,n,odd=0,even=0;
    scanf("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++) {
        scanf("%d",&arr[i]);
    }
    for (int j=0;j<n;j++) {
        if (arr[j]%2==0) 
        even+=1;
        else if (arr[j]%2!=0) 
        odd+=1;
    }
    printf("%d %d",even,odd);
    return 0;
}