#include <stdio.h>

void main()
{
    int a[100];
    int i, n, sum=0;
       printf("\n\n璸衡キАだ计:\n");
       printf("--------------------------------------\n");	
       printf("块计 :");
       scanf("%d",&n);
    
       for(i=0;i<n;i++){
          printf("厩ネ材 %d   だ计: ",i+1);
	      scanf("%d",&a[i]);
	   // }
       // for(i=0; i<n; i++){
          sum += a[i]; // sum=sum +a[i]
       }

    printf("キАだ计 : %d\n\n", sum/n);
}