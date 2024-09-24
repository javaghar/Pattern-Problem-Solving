#include<stdio.h>
void main()
{
    int n=4,space=3,stars=1;
    for(int i=1;i<=2*n-2;++i)
    {     
        for(int j=1;j<=space;j++)
        {
                printf(" ");
        }
         for(int j=1;j<=stars;j++)
        {
                printf("+");
        }
        if(i<3){
            stars+=2;
            space-=1;
            
        }
        else{
            stars-=2;
            space+=1;
            
        }
        printf("\n");
    }
}