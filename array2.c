# include<stdio.h>
void main(){
    int i,n;
    printf("enter number of elements ");
    scanf("%d",&n);  
     printf("enter number");
     int arr[n];
     for(i=0;i<n;i++)
     { scanf("%d",&arr[i]);
     }
     for(i=0;i<n/2;i++){
          int temp=arr[i];
          arr[i]=arr[n-i-1];
          arr[n-i-1]=temp;
     }
     printf("reverse array\n");
     for(i=0;i<n;i++){
          printf("%d\n",arr[i]);
     }

}