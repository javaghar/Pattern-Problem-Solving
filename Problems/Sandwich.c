/*
 1       2       3       4       5
11      12      13      14      15
21      22      23      24      25
16      17      18      19      20
6       7       8       9       10  */

#include<stdio.h>
void main()
{
    int n=6,m=1,k=1,mid;
    mid=n/2;
    for(int i=1;i<=n;i++)
    {
        
        for(int j=1;j<=n;j++)
        {
            if(j==1){m=k;}
            printf("%d\t",k);
            k++;
            
        }  
        if(n%2==0) 
        {
            if(i<=mid){k=m+2*n;}
            if(i==mid){k=m+n;}
            if(i>mid){k=m-2*n;}
         
        }
        else
        {
            if(i<=mid){k=m+2*n;}
            if(i==mid+1){k=m-n;}
            else if(i>mid){k=m-2*n;}
            

        }
        
        printf("\n");      
    }

}