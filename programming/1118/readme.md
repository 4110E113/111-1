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
```c
#include <stdio.h>
int main ()
{
	int i;
	for (i = 30; i>=0; i=i-7)
	{
		if(i != 10 && i != 20 && i != 30)
		printf("%d ", i);
	}
	return 0;
}
```

```c
#include <stdio.h>

int main()
{
	int i ;
	for(i=31; i>=0; i=i-6)
	{
        printf("%d\t", i);
        if(i % 4 == 1)
		{
		 printf("00\n");
	    }
		else
		{
         printf("%d\n", i);
        }
    
    }
    return 0;
}
```
