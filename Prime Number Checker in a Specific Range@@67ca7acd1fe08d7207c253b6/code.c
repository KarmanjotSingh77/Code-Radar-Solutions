void  printPrimesInRange(int a,int b)
  { int count=1;
    for (int i=a;i<=b;i++) {
        if (i==0 || i==1) return 0;
        else {
        for (int j=2;j*j<=i;j++) {
            if (i%j==0)
            count=0;
        }
        }
        if (count) printf("%d ",i);
    }
}