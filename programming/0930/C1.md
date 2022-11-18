```c
#include <stdio.h>
#include<stdlib.h>

int main(void){
	
	printf("型態\t\t大小(bytes)\n");
	printf("short\t\t%lu\n", sizeof(short));
	printf("int\t\t%lu\n", sizeof(int));
	printf("long\t\t%lu\n", sizeof(long));
	printf("float\t\t%lu\n", sizeof(float));
	printf("double\t\t%lu\n", sizeof(double));
	printf("long double\t%lu\n", sizeof(long double));
	printf("char\t\t%lu\n", sizeof(char));
	
	return 0;	
	
}
```
```c
#include <stdio.h>
#include<stdbool.h>

int main(void){

	printf("sizeof(bool)\t\t%lu\n", sizeof(bool));
	printf("sizeof(true)\t\t%lu\n", sizeof(true));
	printf("sizeof(false)\t\t%lu\n", sizeof(false));
	

	printf("true\t\t%lu\n", true);
	printf("false\t\t%lu\n", false);

	return 0;	

}
```
```c
#include <stdio.h>

int main(void){

	printf("sizeof(1)\t\t%lu\n", sizeof(1));
	printf("sizeof(1.0)\t\t%lu\n", sizeof(1.0));

	return 0;	

}
```
```c
#include <stdio.h>

int main(void){
        printf("%lu\n", 26);
	printf("%lu\n", 032);
	printf("%lu\n", 0x1A);

    return 0;	
}
```

