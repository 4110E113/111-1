#include <stdio.h>

void main()
 {     int arr1[50], arr2[50], arr3[50]; //arr1[]皚 arr2[]案计 arr3[]计 
       int i,j=0,k=0,n;
	   printf("块じ计 :");
       scanf("%d",&n);
       for(i=0;i<n;i++) {
	       printf("材 %d じ : ",i+1);
	       scanf("%d",&arr1[i]);
	    }

       for(i=0;i<n;i++) {// 耞案计┪琌计 
	       if (arr1[i]%2 == 0) { // 案计   
			   arr2[j] = arr1[i];  
			   j++;
			}
			else{ //  琌计  
			   arr3[k] = arr1[i];
			   k++;
			}
       }
		
	    printf("\n案计计琌 : \n");
	    for(i=0;i<j;i++)  { //案计皚┮Τじ 
  		    printf("%d ",arr2[i]);
		 }

	    printf("\n计计琌 :\n");
	    for(i=0;i<k;i++)     {//计皚┮Τじ 
		    printf("%d ", arr3[i]);
        }
	    printf("\n\n");	
 }
