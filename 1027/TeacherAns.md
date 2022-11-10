- hw01

```
#include <stdio.h>

int main() 
{
  int i;

  for (i = 1; i < 31; i=i+5)
  {
    printf("%d ", i);
  }
  return 0;
}
```

- hw02

```
#include<stdio.h>
int main()
{
	int i, sum=0;
	for(i=1;i<=40;i++){
	  if(i%5==0 && i>=1  && i<=20){
	   sum=sum+i;	
      }
 	  if(i%9==0 && i>=21 && i<=40){
	  sum=sum+i;
	  }	
	}//for
    printf("%d\n",sum);
	return 0;
}
```

- hw03

```
#include<stdio.h>

int main()
{
	int i;
	int sum=0;	
	
	for(i=50;i<=100;i++){
	    if(i%2!=0 && i%3!=0 && i%5!=0 && i%7!=0){
	       printf("%d\t",i);
	       sum=sum+i; 
		 }		 	
    }    
    printf("\n總和:%d ",sum);
	return 0;
}
```

- hw04

```
#include <stdio.h>
void main()
{     
    int i;
	for (i=50;i>=1;i--)
	{   
	    if(i%5 ==0)  
           printf("\n");
           
        if(i%2== 0 || i%3==0)  
           printf("00 ");
		else
		   printf("%d ",i);
	}
    printf("\n");
}
```

