# teacher ans

-hw01
```c
#include <stdio.h>
int main()
{
    int a = 222;
    printf(" 十 進位是: %d\n", a);    /* 變數a以十進位輸出 */    
    printf(" 八 進位是: %o\n", a);    /* 將變數a以八進位輸出 */ 
    printf("十六進位是: %x\n", a);    /* 將變數a以十六進位輸出 */ 
    return 0;   
}
```
-hw02
```c
#include <stdio.h>
int main()
{
	double a = 399.48;
	double b = 80.72;
	double c = 95.59;
	printf("%-20s %5.2f\n", "C language", a);
	printf("%-20s %5.2f\n", "Python Language", b);
	printf("%-20s %5.2f\n", "Java Language", c);	
	return 0;
}
```
-hw03
```c
/* ex3-5.c */
#include <stdio.h>
int main()
{
	char id[20];
	double midScore;
	double finalScore;
	
	printf("Enter id: ");
	scanf("%s", id);
	
    printf("Enter mid-term score: ");
	scanf("%lf", &midScore);
	
	printf("Enter final score: ");
	scanf("%lf", &finalScore);
	
	printf("\nid: %s\n", id);
	printf("期中考分數: %.2f\n", midScore);
	printf("期末考分數: %.2f\n", finalScore);	
	return 0; 
}
```
-hw04
```c
#include<stdio.h>
int main()
{
	int x=34,y;
	int result;
	y = 56;
	result = x * (y++);
	printf("result = %d  x = %d  y = %d\n", result, x, y);
    
	y = 5;
	result = x * (++y);
	printf("result = %d  x = %d  y = %d\n", result, x, y);
	return 0;
}
```
