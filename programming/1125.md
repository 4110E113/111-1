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
```c
#include <stdio.h>
int main()
{
int x,n;
scanf("%d",&n);
for(x=n-1;x>0;x--)
{
n*=i;
}
printf("%d",n);
return 0;   
}
```
