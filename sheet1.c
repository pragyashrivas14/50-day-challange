#include<stdio.h>
int main(){
    int i,n;
    printf("enter no of element");
    scanf("%d",&n);
    printf("enter element");
            int arr[n];
                int max=arr[i];
            int min=arr[i];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    if(arr[i]>max){
        for(i=0;i<n;i++)
        arr[i]=max;
        printf("max element is ",arr[i]);
    }else{
        if(arr[i]<min){
                    for(i=0;i<n;i++){

            arr[i]=min;}
            printf("min element is",arr[i]);
        }

    }
}