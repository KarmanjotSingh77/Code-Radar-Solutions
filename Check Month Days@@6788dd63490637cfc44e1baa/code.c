// Your code here...
#include <stdio.h>
int main() {
    int num,day;
    scanf("%d",&num);
    switch (num) {
    case 1:
    day=31;
    break;
    case 2:
    day=28;
    break;
    case 3:
    day=31;
    break;
    case 4:
    day=30;
    break;
    case 5:
    day=31;
    break;
    case 6:
    day=30;
    break;
    case 7:
    day=31;
    break;
    case 8:
    day=31;
    break;
    case 9:
    day=30;
    break;
    case 10:
    day=31;
    break;
    case 11:
    day=30;
    break;
    case 12:
    day=31;
    break;
    default:
    printf("Invalid month");
    break;
    }
    if (num>=1 && num<=12) 
    printf("%d",day);
    return 0;

}