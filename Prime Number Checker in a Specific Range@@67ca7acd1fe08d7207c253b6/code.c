void  printPrimesInRange(int a,int b)
  { 
    for (int i=a;i<=b;i++) {
        int count=1;
        if (i==0 || i==1) count=0;
        else {
        for (int j=2;j*j<=i;j++) {
            if (i%j==0)
            count=0;
            break;
        }
        }
        if (count) printf("%d ",i);
    }
}