#include <stdio.h>

void main()
 {     int arr1[50], arr2[50], arr3[50]; //arr1[]��}�C arr2[]�񰸼� arr3[]��_�� 
       int i,j=0,k=0,n;
	   printf("��J�����Ӽ� :");
       scanf("%d",&n);
       for(i=0;i<n;i++) {
	       printf("�� %d �Ӥ��� : ",i+1);
	       scanf("%d",&arr1[i]);
	    }

       for(i=0;i<n;i++) {// �P�_���ƩάO�_�� 
	       if (arr1[i]%2 == 0) { // ����   
			   arr2[j] = arr1[i];  
			   j++;
			}
			else{ //  �O�_��  
			   arr3[k] = arr1[i];
			   k++;
			}
       }
		
	    printf("\n���ƼƭȬO : \n");
	    for(i=0;i<j;i++)  { //�C�L���ư}�C�Ҧ��������� 
  		    printf("%d ",arr2[i]);
		 }

	    printf("\n�_�ƼƭȬO :\n");
	    for(i=0;i<k;i++)     {//�C�L�_�ư}�C�Ҧ��������� 
		    printf("%d ", arr3[i]);
        }
	    printf("\n\n");	
 }
