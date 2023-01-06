#include <stdio.h>
int num;
int main() {
  while(1) {
    printf("\n請輸入整數值: ");
    scanf("%d", &num);
    checkOddEven(num);
  }
    return 0;
}

int checkOddEven(num) {

    // true if num is perfectly divisible by 2
    if(num % 2 == 0)
        printf("\n所輸入的整數是偶數");
    else
        printf("\n所輸入的整數是奇數");
    
}
