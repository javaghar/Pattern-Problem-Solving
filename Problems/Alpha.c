

/*ABC
BCA
CAB */



#include<stdio.h>
void main()
{
    int n=3;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {                                                                  
            char ch='A'+(i+j)%n;
            printf("%c",ch);
        }      
        
        printf("\n");      
    }

}

