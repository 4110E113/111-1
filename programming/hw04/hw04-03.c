#include<stdio.h>
#define MAX 100

int findMaxElem(int []);
int n;  
int main(){
    int arr1[MAX],mxelem,i;
    printf(" �п�J�@���}�C�����Ӽ�:");
    scanf("%d",&n);
   
    printf(" �п�J�@���}�C����:\n",n);
    for(i=0;i<n;i++) {
	    printf(" ���� - %d : ",i);
	     scanf("%d",&arr1[i]);
	}
    mxelem=findMaxElem(arr1);
    printf(" �}�C���̤j�������O: %d\n\n",mxelem);
    return 0;
}
int findMaxElem(int arr1[]) {
    int i=1,mxelem;
    mxelem=arr1[0];
    while(i < n)
	{
      if(mxelem<arr1[i])
           mxelem=arr1[i];
      i++;
    }
    return mxelem;
}
