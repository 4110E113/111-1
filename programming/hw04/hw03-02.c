#include <stdio.h>
void main()
{
  int arr1[50],n,i,j=0,sml,sml2nd;
       printf("块计计 : ");
       scanf("%d", &n);
       // Stored values into the array
       for(i=0;i<n;i++){
	      printf("材 %d だ计 : ",i+1);
	      scanf("%d",&arr1[i]);
	    }
       // find location of the smallest element in the array 
       sml=arr1[0];  //安砞程材 ま竚 , 盢ㄤ竚sml 
       for(i=0;i<n;i++){
           if(sml>arr1[i]){ //皐癸皚ㄤじゑ耕тゑ材じ 
              sml=arr1[i];  //т. 盢程竚 smal 跑计 
              j = i;        //. 盢程ま竚  "j"
           }    
       }
      // ignore the smallest element and find the 2nd smallest element in the array 
      sml2nd=99999; //砞﹚ sml2nd 跑计 Τ程 
      for(i=0;i<n;i++){ // 穝弄皚┮Τじ 
          if(sml2nd>arr1[i] && i!= j){ // 狦 т皚いじ  sml2nd跑计い       
		     sml2nd=arr1[i];  //  盢じず甧  sml2nd跑计い 
         }
   }//end for()

  printf("材厩ネだ计琌 :  %d \n\n", sml2nd);
}
