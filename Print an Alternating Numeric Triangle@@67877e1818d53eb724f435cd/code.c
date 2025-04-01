#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    for(int i=1; i<=n; i++){
            int a;
            if(i%2!=0) a = 1;
            else a = 0;
        
        for(int j=0; j<=i; j++){
            if(a==0) a = 1;
            else a = 0;
            printf("%d", a);
        }
        printf("\n");
    }
    return 0;
}