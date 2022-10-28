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
