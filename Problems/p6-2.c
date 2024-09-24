#include<stdlib.h>
#include<stdio.h>
void main()
{
    int n=5,num;
    for(int i=1;i<=n;i++)
    {
        if(i%2==0){num=0;}
        else{num=1;}
        
        for(int j=1;j<=i;j++)
        {
            printf("%d ",num);
            num=1-num;  
        }  
           
        printf("\n");      
    }

}
