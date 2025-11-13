#include<stdio.h>
int main(){
    int i,n;
    printf("enter no of element");
    scanf("%d",&n);
    printf("enter element");
            int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
                int max=arr[0];
                int min=arr[0];
      for (i=0;i<n;i++){
       if( arr[i]>max){
            max=arr[i];
       }
           if(arr[i]<min){
            min=arr[i];
           }
           
    }
        printf("max element is %d\n",max);
     printf("minimum element is %d",min);
}

