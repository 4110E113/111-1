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
- hw03 (the bug)
```c
#include <stdio.h>

int main(){
	int ID;
	int test1;
	int test2; 
	
	printf("請輸入學號 : ");
	scanf("%d", &ID);
	printf("學號 : %d\n", ID);
	
	fflush(stdin);
	
	printf("請輸入期中考分數 : ");
	scanf("%d", &test1);
	printf("期中分數 : %d\n", test1);
	
	fflush(stdin);
	
	printf("請輸入期末考分數 : ");
	scanf("%d", &test2);
	printf("期末分數 : %d\n", test2);
	
	return 0 ;
}
```
- hw04
- 
