- hw01.c
```c
#include <stdio.h>

int main(void){
	printf("顯示十進位整數 %d\n", 222);
	printf("顯示八進位整數 %o\n",222);
	printf("顯示十六進位整數 %X\n", 222);
	      return 0 ;
}
```
- hw02.c
```c
#include <stdio.h>

int main(void){
	printf("C lauguage\t 1399.48\n");
	printf("python lauguage\t 80.72\n");
	printf("java lauguage\t 95.59");
	      return 0 ;
}
```
- hw03 
```c
#include <stdio.h>

int main(){
	char ID[20];
	float test1;
	float test2; 
	
	puts("請輸入學號 : ");
	gets(ID);
	
	fflush(stdin);
	
	printf("請輸入期中考分數 : ");
	scanf("%f", &test1);
	printf("期中分數 : %.2f\n", test1);
	
	fflush(stdin);
	
	printf("請輸入期末考分數 : ");
	scanf("%f", &test2);
	printf("期末分數 : %.2f\n", test2);
	
	fflush(stdin);
	
	float number;
	number = test1 + test2;
	printf("期中考與期末考平均分數 : %2.f\n", (number)/2);
	
   
   return 0 ;
}
```
- hw04
```c
#include<stdio.h>

int main(){
    
    int x , y;
    int result;
    y = 57 , x = 34;
    result = x * y -34;
    printf("result = %d  x = %d  y = %d\n", result, x, y);
    
    y = 6;
    result = x * y;
    printf("result = %d  x = %d  y = %d\n", result, x, y);
    return 0;
}
```
