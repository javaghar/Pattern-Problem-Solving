/*  A
   ABA
  ABCBA
 ABCDCBA
ABCDEDCBA  s*/


#include<stdio.h>
void main()
{
    int n=5;
    
    for(int i=0;i<n;i++)
    {
        for(int j=1;j<=n-i-1;j++)
        {
            printf(" ");
        }   
        char ch='A';
        int val=2*i+1;
        for(int j=1;j<=val;j++)   
        {
            printf("%c",ch);
            if(j<=val/2){ch++;}
            else{ch--;}
        }
        printf("\n");      
    }

}
