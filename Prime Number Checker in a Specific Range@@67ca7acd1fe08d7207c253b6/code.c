void  printPrimesInRange(int a,int b)
  {
    int count1=0; 
    for (int i=a;i<=b;i++) {
        int count=0;
        if (i==0 || i==1) count=0;
        else {
        for (int j=2;j*j<=i;j++) {
            if (i%j==0) {
            count=0;
            break;
        }
        else count1+=1;
        }
    }
            if (count)  printf("%d ",i);
        
  }
  if (count1==0) printf("No prime numbers");
  }