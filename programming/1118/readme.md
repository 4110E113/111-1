```c
#include<stdio.h>

int main(void)
{
	int input;
	
	printf("number : ");
	scanf("%d", &input);
	
    if(input < 40 || input > 60)
        printf("score : %d\n", input*2);
    else if(input == 50)
        printf("score : %d\n", input-10);
    else
        printf("no");
        return 0;
		
}
```
