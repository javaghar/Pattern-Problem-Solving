/*


*        *
**      **
***    ***
****  ****
**********
****  ****
***    ***
**      **
*        *          */



#include<stdio.h>
void main()
{
    int n=5,space=2*n-2;
    for(int i=1;i<=2*n-1;i++)
    {
        
        int stars=i;
        if(i>n)
        {
            stars=2*n-i;
        }
        for(int j=1;j<=stars;j++)
        {
            printf("*");
        }
        for(int j=1;j<=space;j++)
        {
            printf(" ");
        }
        for(int j=1;j<=stars;j++)
        {
            printf("*");
        }
        printf("\n");
        if(i>=n) {space+=2;}
        else{space-=2;}
    }
        
    
            
}

