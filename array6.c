#include<stdio.h>
int main(){
    int i,n,key;
     int count=0;
    printf("enter numbe of elements ");
    scanf("%d",&n);
    printf("enter elements");
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("enter number whose accurance want");
    scanf("%d",&key);
        for(i=0;i<n;i++)
    if(arr[i]==key){
        count++;
    }
    printf("number of accurance  %d",count);
    return 0;
}