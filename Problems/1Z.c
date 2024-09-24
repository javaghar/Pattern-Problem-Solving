#include<stdio.h>
void highest(int arr[],int n)
{
    int greatest,current;
    greatest=-1;
    for(int i=n-1;i>=0;--i)
    {
        
        current=arr[i];
        arr[i]=greatest;
        if(current>greatest)
        {
            greatest=current;
        }

    }
}
void main(){
    int arr[]={16,17,4,3,5,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    highest(arr,n);
    for(int i=0;i<n;i++)
    {
        printf("%d   ",arr[i]);
    }
}
