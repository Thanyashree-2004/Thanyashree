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



   Initialization:

Initially, the number entered by the user, 12345, is stored in the variable b.
Extracting the Rightmost Digit (a5):

a5 = b % 10;
Here, b % 10 calculates the remainder when b is divided by 10, which is 5.
So, a5 is assigned the value of 5, which represents the rightmost digit of the number.
b = b / 10;
Now, b / 10 divides b by 10, resulting in 1234. This removes the rightmost digit (5).
Extracting the Next Digit (a4):

a4 = b % 10;
b % 10 now calculates the remainder when b (which is now 1234) is divided by 10, which is 4.
So, a4 is assigned the value of 4.
b = b / 10;
b / 10 divides b (now 1234) by 10, resulting in 123. This removes the rightmost digit (4).
Repeating for the Remaining Digits:

The above process continues similarly for a3, a2, and a1, extracting digits 3, 2, and 1 respectively, while b keeps getting divided by 10 to remove the rightmost digit each time.
