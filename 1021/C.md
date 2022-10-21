```
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
