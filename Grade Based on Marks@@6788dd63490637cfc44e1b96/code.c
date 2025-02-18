#include <stdio.h>
int main() {
    int num;
    char grade;
    scanf("%d",&num);
    if (num>=90) 
    grade='A';
    else if (num<90 && num>=80) 
    grade='B';
    else if (num<80 && num>=70)
    grade='C';
    else if (num<70 && num>=60) 
    grade='D';
    else if (num<60)
    grade='F';
    printf("%c",grade);
    return 0; 
}