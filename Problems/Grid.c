/*

P     M
 R   A
  O R
   G
  O R
 R   A
P     M          */




#include<stdio.h>
void main()
{
    int n=7;
    char word[]="PROGRAM";
    for(int i=0;i<n;++i)
    {     
        for(int j=0;j<n;j++)
        {
            if(i==j || i+j==n-1){
                printf("%c",word[j]);
            }
            else
            printf(" ");
        }
        printf("\n");
    }
}