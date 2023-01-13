#include <stdio.h>
#include <stdbool.h>

int sum (int, int);//function declaration
int main (void) {
        int total, a, b;
        bool l=true;
        while(l){
			printf("\n\n 請輸入 兩整數值 :");
			scanf(" %d  %d", &a, &b); 	
	        total = sum (a, b);//function call
	        printf (" 總和是:  %d\n", total);
	    }
	    //return 0;  // be not executed!
}

int sum (int a, int b) { //function definition
	    int s;
		s=a+b;
        return s; //function returning a value
}