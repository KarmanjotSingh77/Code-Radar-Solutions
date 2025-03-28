# include <stdio.h>
int main() {
    int num;
    scanf("%d",&num);
    int arr[num];
    for (int i=0;i<num;i++) {
        scanf("%d",&arr[i]);
    }
    int larg=arr[0];
    for (int j=0;j<num;j++) {
        if (arr[j]>larg) 
        larg=arr[j];
    }
    int smal=larg;
    for (int k=0;k<num;k++) {
        if (arr[k]<smal) 
        smal=arr[k];
    }
    printf("%d %d",smal,larg);

}