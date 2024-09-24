/*  1 
  3 2
 6 5 4
10 9 8 7
10 9 8 7
 6 5 4
  3 2
   1    */


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
            printf("%d ",num);
            num--;
        }    
        printf("\n");      
    }
     for(int i=n;i>=1;--i)
    {  
        for(int j=1;j<=n-i;j++)
        {
            printf(" ");
        }
        num=i*(i+1)/2; 
        for(int j=1;j<=i;j++)
        {
            printf("%d ",num);
            num--;
        }    
        printf("\n");      
    }

}