#include <stdio.h>

void main()
{
    int a[100];
    int i, n, sum=0;
       printf("\n\n計算平均分數:\n");
       printf("--------------------------------------\n");	
       printf("輸入人數 :");
       scanf("%d",&n);
    
       for(i=0;i<n;i++){
          printf("學生第 %d 個  分數為: ",i+1);
	      scanf("%d",&a[i]);
	   // }
       // for(i=0; i<n; i++){
          sum += a[i]; // sum=sum +a[i]
       }

    printf("平均分數 : %d\n\n", sum/n);
}