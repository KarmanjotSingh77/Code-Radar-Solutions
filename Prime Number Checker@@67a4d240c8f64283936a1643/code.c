# include<stdio.h>
int isPrime(int num);
int isPrime(int num) {
    int count=1;
    if (num<2) 
    count=0;
    else {
    for (int i=2;i*i<=num;i++) {
        if (num%i==0)
            count=0; 
    }
    }
    return count;
}
    