#include<stdio.h>
void main()
{
    int n=10,num;
    for(int i=1;i<=n;i++)
    {
        num=i;
        for(int j=1;j<=i;j++)
        {
            printf("%d ",num);
            if(i==2){num+=5;}  
            if(i==3 && j==1){num+=3; }    
            if(i==3 && j==2){num+=2; }          
            if(i==4 && (j==1 || j==3)){num+=1; } 
            if(i==4 && j==2){num+=4; }
        }   
        printf("\n");      
    }

}