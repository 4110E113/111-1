#include <stdio.h>
main(){
int x=0,y=0,z=0,tmp=0;
    printf("�п�J�T�Ӽ� \n");
    scanf("%d%d%d",&x,&y,&z);
	if (x>y){ //�洫x,y����
	    tmp=x;
	    x=y;
	    y=tmp;
	}  
	if (x>z){ //�洫x,z����
	    tmp=x;
	    x=z;
	    z=tmp;
	} 
	if(y>z)	{//�洫z,y����
	    tmp=y;
		y=z;
		z=tmp;} 

	printf("�p��j�ƧǬ�: %d %d %d  \n",x,y,z);
}