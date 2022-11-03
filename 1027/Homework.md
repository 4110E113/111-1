- hw01
```c
#include <stdio.h>

int main(void) {
	int x ;
	for(x = 1; x < 27; x += 5){
	    printf("%d ", x);
	}
	
	return 0;
}

```
- hw02
```c
#include <stdio.h>
int main()
{
    int a=0, b=0;
    for (int i = 1; i <= 40; i++)
    {
        if (i % 5 == 0)
        {
            a = a + i;
        }
        if (i % 9 == 0)
        {
            b = b + i;
        }
    }
    int num = a + b;
    printf("%d", num);
    return 0;
}
```
- hw03
```c
#include<stdio.h>
int main(){
	int i , k , num = 0;
	for(i = 50; i <= 100; i++){
		
		int p = 1; 
		for(k = 2; k < i; k++){
			if(i % k == 0){
				p = 0;
			}
		}
		if(p == 1)
    num = num + i;
	}
        printf("%d", num);
	return 0 ;
```
- hw04
```c
#include<stdio.h>

int main(){
	int i , k , num=0;
	for(i = 50; i >= 1; i--){
			if(i % 2 == 1){
				printf("%d\n", i);
	           }
		        else if(i % 3 == 1){
                    printf("%d ", i);
                }
                     else printf("00 ");
        }
    return 0;
} 
```
