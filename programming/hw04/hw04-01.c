#include <stdio.h>
#include <stdbool.h>

int sum (int, int);//function declaration
int main (void) {
        int total, a, b;
        bool l=true;
        while(l){
			printf("\n\n �п�J ���ƭ� :");
			scanf(" %d  %d", &a, &b); 	
	        total = sum (a, b);//function call
	        printf (" �`�M�O:  %d\n", total);
	    }
	    //return 0;  // be not executed!
}

int sum (int a, int b) { //function definition
	    int s;
		s=a+b;
        return s; //function returning a value
}