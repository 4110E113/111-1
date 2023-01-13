#include <stdio.h>
main(){
int x=0,y=0,z=0,tmp=0;
    printf("叫块计 \n");
    scanf("%d%d%d",&x,&y,&z);
	if (x>y){ //ユ传x,y
	    tmp=x;
	    x=y;
	    y=tmp;
	}  
	if (x>z){ //ユ传x,z
	    tmp=x;
	    x=z;
	    z=tmp;
	} 
	if(y>z)	{//ユ传z,y
	    tmp=y;
		y=z;
		z=tmp;} 

	printf("逼: %d %d %d  \n",x,y,z);
}