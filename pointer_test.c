#include<stdio.h>
void main(){
   int arr[10],arr2[10],i,n;
   printf("enter the range...");
   scanf("%d",&n);
   printf("enter the element in the array....");
   for(i=0;i<n;i++){
   	   printf("element -%d : ",i);
   	   scanf("%d",&arr[i]);
   }
   	   //copy elements of first array into second array.....
   	   for(i=0;i<n;i++){
   	   	arr2[i]=arr[i];
		  }
   	   //print the element of the first array....
   	   printf("element stored in the first array :\n");
   	   for(i=0;i<n;i++){
   	   	printf("%d",arr[i]);
		  }
		  printf("element are copied in the second array...\n");
		  for(i=0;i<n;i++){
		  	printf("%d",arr2[i]);
		  }
		  printf("\n\n");
	
	
	
}
