#include<stdio.h>
void main()
{
    int n=5;
    
    for(int i=0;i<n;i++)
    {
        for(char ch='E'-i;ch<='E';ch++)
        {
            printf("%c",ch);
        }      
        printf("\n");      
    }

}
