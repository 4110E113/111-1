#include <stdio.h>
#include <stdbool.h>
int checkOddEven(int);
int main (void){
        int total, n1;
        bool lb=true;
        
        while(lb){
			printf("\n\n �п�J��ƭ�: ");
			scanf(" %d", &n1); 				
	        if(checkOddEven(n1)){
               printf("�ҿ�J����ƬO�_��.\n");
            }
            else{
               printf("�ҿ�J����ƬO����.\n");
            }
  	    }
	    return 0;  // be not executed!
}   
	//if the least significant bit is 1 the number is odd and 0 the number is even 
int checkOddEven(int n1){   
	    return (n1 & 1);//The & operator does a bitwise and 
}


