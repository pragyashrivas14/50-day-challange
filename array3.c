#include<stdio.h>
int main(){
    int i,n,j;
    printf("enter number of element ");
    scanf("%d",&n);
    printf("enter element");
     int arr[n];
     for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
     }
     
     for(i=0;i<n;i++){
      for(j=i+1;j<n;j++){
     if(arr[i]==arr[j]){
printf(" duplicate number is %d",arr[j]);
break;
     } 
     }
   }
  }