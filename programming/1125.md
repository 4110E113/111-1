```c
#include<stdio.h>
int main()
{
    int score , sum=0;
    int count=-1;
	while(score != -1)
	{
	   count++;
	   sum += score;
	   printf("enter score(-1 over) :");
	   scanf("%d", &score);
	}
	printf("平均%f\n", (double)sum / count);
	
  return 0 ;
}
```
