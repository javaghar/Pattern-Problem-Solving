/* 1  2  3  4 
   8  7  6  5 
   9 10 11 12
  16 15 14 13 */
  
#include<stdio.h>
void main()
{
    int n=4,num=1;
    for(int i=0;i<n;i++)
    {
        

        for(int j=0;j<n;j++)
        {
            printf("%d\t",num);
            if(i%2==0){num++;}
            else{num--;}
        }   
        if(i%2==0){num=num+3; }  
        else{num=num+5;}
        printf("\n");      
    }

}
