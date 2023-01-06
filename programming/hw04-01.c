#include<stdio.h>
int main() {
   int a, b, sum;
    while(1) {
   printf("\n請輸入兩個數值： ");
   scanf("%d %d", &a, &b);
   sum = a + b;
   printf("總和是 : %d", sum);
    }
   return(0);
}

