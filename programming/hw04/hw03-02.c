#include <stdio.h>
void main()
{
  int arr1[50],n,i,j=0,sml,sml2nd;
       printf("��J�H�ƭӼ� : ");
       scanf("%d", &n);
       // Stored values into the array
       for(i=0;i<n;i++){
	      printf("�� %d �ӤH���� : ",i+1);
	      scanf("%d",&arr1[i]);
	    }
       // find location of the smallest element in the array 
       sml=arr1[0];  //�����]�̤p�Ȧb�Ĥ@�� ���ަ�m , �ñN��ȩ�msml 
       for(i=0;i<n;i++){
           if(sml>arr1[i]){ //�w��}�C��L�����@�@����B��X��Ĥ@�Ӥ�����p���� 
              sml=arr1[i];  //���F. �N�̤p�ȩ�m smal �ܼ� 
              j = i;        //��F. �N�̤p�Ȫ����ީ�m  "j"
           }    
       }
      // ignore the smallest element and find the 2nd smallest element in the array 
      sml2nd=99999; //�]�w sml2nd �ܼ� ���@�̤j�� 
      for(i=0;i<n;i++){ // ���sŪ���}�C�Ҧ����� 
          if(sml2nd>arr1[i] && i!= j){ // �p�G ���}�C������ �p�� sml2nd�ܼƤ�����       
		     sml2nd=arr1[i];  //  �N�����������e�� ��� sml2nd�ܼƤ� 
         }
   }//end for()

  printf("�ĤG�C���ǥͤ��ƬO :  %d \n\n", sml2nd);
}
