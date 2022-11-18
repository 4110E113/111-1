```c
#初始值
#include <stdio.h>

int main(void) {

	int ageofstudent;
	double scoreofstudent;
	char levelofstudent;
	
	printf("\n年級\t分數\t級別\n");
	printf("%d \t %.2f \t %c \n", ageofstudent, scoreofstudent, levelofstudent);
	
	ageofstudent = 5 ;
	scoreofstudent = 80.0 ;
	levelofstudent = 'B';
	printf("\n年級\t分數\t級別\n");
	printf("%d \t %.2f \t %c \n", ageofstudent, scoreofstudent, levelofstudent);
	
	return 0;
}
```
```c
#include <stdio.h>

int main(void) {
	char c;
	
	printf("請輸入一個字元 : ");
	c = getchar();
	
	putchar(c);
	putchar('\n');
	
	return 0;
}
```
- get & fget
```c
#include <stdio.h>

int main(void) {
	char str[20];
	
	puts("請輸入字串 : ");
	gets(str);
	
	puts("請輸入的字串為 : ");
	puts(str);
	
	return 0;
}
```
```c
#include <stdio.h>

int main(void) {
	char str[20];
	
	puts("請輸入字串 : ");
	fgets(str, sizeof(str), stdin);
	
	puts("請輸入的字串為 : ");
	puts(str);
	
	return 0;
}
```
