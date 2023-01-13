#include<stdio.h>
#define MAX 100

int findMaxElem(int []);
int n;  
int main(){
    int arr1[MAX],mxelem,i;
    printf(" 請輸入一維陣列元素個數:");
    scanf("%d",&n);
   
    printf(" 請輸入一維陣列元素:\n",n);
    for(i=0;i<n;i++) {
	    printf(" 元素 - %d : ",i);
	     scanf("%d",&arr1[i]);
	}
    mxelem=findMaxElem(arr1);
    printf(" 陣列中最大的元素是: %d\n\n",mxelem);
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
