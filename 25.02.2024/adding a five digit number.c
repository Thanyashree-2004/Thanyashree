#include <stdio.h>

int main() {
   int a1,a2,a3,a4,a5,b,sum;
   printf("enter the five digit number:\n");
   scanf("%d",&b);
   a5=b%10;
   b=b/10;
   a4=b%10;
   b=b/10;
   a3=b%10;
   b=b/10;
   a2=b%10;
   b=b/10;
   a1=b%10;
   b=b/10;
   sum=a5+a4+a3+a2+a1;
   printf("%d",sum);
}


o/p:
enter the five digit number:
15234
15
