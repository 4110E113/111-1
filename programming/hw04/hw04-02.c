#include <stdio.h>
#include <stdbool.h>
int checkOddEven(int);
int main (void){
        int total, n1;
        bool lb=true;
        
        while(lb){
			printf("\n\n 請輸入整數值: ");
			scanf(" %d", &n1); 				
	        if(checkOddEven(n1)){
               printf("所輸入的整數是奇數.\n");
            }
            else{
               printf("所輸入的整數是偶數.\n");
            }
  	    }
	    return 0;  // be not executed!
}   
	//if the least significant bit is 1 the number is odd and 0 the number is even 
int checkOddEven(int n1){   
	    return (n1 & 1);//The & operator does a bitwise and 
}


