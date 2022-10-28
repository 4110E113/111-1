```c
#include <stdio.h>


int main() {
	int x = 0;
	int remain = 0;
	
	printf("enter number:");
	scanf("%d", &x);
	
	remain = x % 2;
	if(remain == 1){
		printf("%d 為奇數\n", x);
	}
	else{
		printf("%d 為偶數\n", x);
	}
	return 0;
}
```

```c
#include <stdio.h>


int main() {
	int x = 0;
	printf("enter int:");
	scanf("%d", &x);
	if(x % 2){
		printf("%d 為奇數\n", x);
	}
	else{
		printf("%d 為偶數\n", x);
	}
	return 0;
}
```
```c
#include <stdio.h>

int main() {
	int score = 0;
	
	printf("enter score:");
	scanf("%d", &score);
	
	if(score >= 90){
		puts("A");
	} else if (score >= 80 && score < 90){
		puts("B");
	} else if (score >= 70 && score < 80){
		puts("C");
	} else if (score >= 60 && score < 70){
		puts("D");
	} else {
		puts("E (fail)");
	}
			return 0;
}
```
```c
#include <stdio.h>

int main(void) {
	int x;
	
	for (x = 0; x <= 10; x = x + 2) {
	  printf("%d\n", x);
	}
	
	return 0;
}
```
```c
#include <stdio.h>

int main(void) {
    int a;
    
    for(a = 0; a < 10; a++){
    	if(a == 4)
		  break;
	    } 
	
	printf("%d\n", a);
		
	}
	
	return 0;
}
```
