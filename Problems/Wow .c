#include<stdlib.h>
#include<stdio.h>
void main()
{
    int n=4,num;
    for(int i=1;i<=n;i++)
    {  
        for(int j=1;j<=n-i;j++)
        {
            printf(" ");
        }
        num=i*(i+1)/2; 
        for(int j=1;j<=i;j++)
        {
            printf("%d",num);
            num--;
        }    
        printf("\n");      
    }

}
