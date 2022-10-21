```c
#include <stdio.h>
#include<stdlib.h>

int main(void){
	// C1
	printf("%d\n", 1 + 2 * 3);
	printf("%d\n", 1 + 2 + 3 / 4);
	printf("%d\n",(1+2+3) / 4);
	printf("%d\n", rand() % 100);
	
    double number = 10;
	printf("%d\n", (int) number / 3);
	
	// C2
  
	number = 10.0;
	printf ("%f\n", number / 3);
	
	// C3
	
	int num = 10;
	number = num;
	printf("%f\n", number);
	
	// C4
	
	num = 0;
	number = 3.14;
	num = (double) number;
	printf("-->%d\n", num);
	printf("-->%f\n", num);
	
	// C5
	
	int x = 10;
	printf("-->%f\n", (double) x /3);
    return 0 ;
}
```
```c
#include <stdio.h>

int main(void){
    int num = 75;
    
	printf("%d\n",num > 70 && num < 80);
	printf("%d\n",num > 80 || num < 75);
	printf("%d\n",!(num > 80 || num < 75));

    return 0 ;
}
```
```c
#include <stdio.h>

int main(void){
    puts("AND運算 : ");
	printf("0 AND 0\t\t%d\n",0 & 0);
	printf("0 AND 1\t\t%d\n",0 & 1);
	printf("1 AND 0\t\t%d\n",1 & 0);
	printf("1 AND 1\t\t%d\n",1 & 1);
	
	puts("OR運算 : ");
	printf("0 OR 0\t\t%d\n",0 | 0);
	printf("0 OR 1\t\t%d\n",0 | 1);
	printf("1 OR 0\t\t%d\n",1 | 0);
	printf("1 OR 1\t\t%d\n",1 | 1);
	
	puts("XOR運算 : ");
	printf("0 XOR 0\t\t%d\n",0 ^ 0);
	printf("0 XOR 1\t\t%d\n",0 ^ 1);
	printf("1 XOR 0\t\t%d\n",1 ^ 0);
	printf("1 XOR 1\t\t%d\n",1 ^ 1);
	
	puts("NOT運算 : ");
	printf("NOT 0\t\t%d\n", !0);
	printf("NOT 1\t\t%d\n", !1);
	
    return 0 ;
}
```
