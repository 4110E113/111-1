#include <stdio.h>

void main()
{
    int a[100];
    int i, n, sum=0;
       printf("\n\n�p�⥭������:\n");
       printf("--------------------------------------\n");	
       printf("��J�H�� :");
       scanf("%d",&n);
    
       for(i=0;i<n;i++){
          printf("�ǥͲ� %d ��  ���Ƭ�: ",i+1);
	      scanf("%d",&a[i]);
	   // }
       // for(i=0; i<n; i++){
          sum += a[i]; // sum=sum +a[i]
       }

    printf("�������� : %d\n\n", sum/n);
}