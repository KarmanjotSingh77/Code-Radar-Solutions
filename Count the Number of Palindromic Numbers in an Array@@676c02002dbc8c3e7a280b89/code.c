# include <stdio.h>
int ispal(int n) {
    int temp;
    int rem,rev=0;
    if (n<0) {
         temp=n*(-1);
    }
    else temp=n;
    while (temp>0) {
        rem=temp%10;
        rev=rev*10+rem;
        temp=temp/10;
    }
    if (rev==n) return 1;
    else return 0;
    }
    int main() {
        int num,count=0;
        scanf("%d",&num);
        int arr[num];
        for (int i=0;i<num;i++) {
            scanf("%d",&arr[i]);
        }
        for (int j=0;j<num;j++) {
           int a=ispal(arr[j]);
            if (a) count+=1;
        }
        printf("%d",count);
        return 0;
    }