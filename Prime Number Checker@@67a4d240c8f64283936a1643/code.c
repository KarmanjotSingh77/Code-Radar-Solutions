# include<stdio.h>
int count=0;
int isPrime(int num);
int isPrime(int num) {
    for (int i=0;i<num/2;i++) {
        if (num%i==0) {
            count=1;
        } else
        count=0;
        return count;
    }
}