#include<stdio.h>
void main()
{
    int n,count;
    printf("Enter value:\n");
    scanf("%d/n",&n);
    count=2*n-1;
    for(int i=n;i>=1;--i)
    {
        for(int j=1;j<=n-i;j++)
        {
            printf(" ");
        }
        int k=i;
        
        for(int m=1;m<=count;m++)
        {
            printf("%d",k);
            if(m<=count/2){
                k++;
                }
            else{
                k--;
                }
        }
        count=count-2;
        printf("\n");
        
        
    }

}
