- NO.1
```c
#include<stdio.h>

int main() {
	int score = 40;
	
	printf("enter score:");
	scanf("%d", &score);
	
	if(score >= 40 && score <= 59){
		printf("%d", score+20);
	} else if (score >= 60){
		printf("%d", score+30);
	} 
	else if (score < 40){
		printf("分數低於40分", score);
	} 
	return 0;
}
```
- NO.2
```c
#include <stdio.h>
void main()
{     
    int i;
	for (i=31;i>=1;i=i-6)
	{   
	    if(i%5 ==1){
		   printf("%d ", i);
		} 
           
        else
        printf("");
	}
    return 0 ;
}
```
- NO.3
```c
#include <stdio.h>


int main(){
	int i ;
	for(i = 31; i >= 0; i=i-6){
        printf("%d ", i);
        

			if(i % 4 == 1){
				printf("00\n");
	           }
		        else{
                    printf("%d ", i);
                }
    
        }
    return 0;
}
```
- NO.4
```c
#include <stdio.h>
int main()
{
    int a = 0, b = 0, i;
    for (i = 1; i < 6; i++)
    {
        printf("%d\n", i);
		a=a+i;
	
		if (i % 2 == 1)
        {
            b = b + i;
        }
    }
    printf("%d\n", a);
    printf("%d", b);
	
    return 0;
}
```

