/*    G
     GR
    GRA
   GRAM
  GRAMP
 GRAMPR
GRAMPRO   */



#include<stdio.h>
#include<string.h>
void main()
{
    int n=7,len,middle;
    char word[]="PROGRAM";
    len=strlen(word);
    middle=len/2;
    for(int i=1;i<=n;++i)
    {     
        for(int j=1;j<=n-i;j++)
        {
            printf(" ");
        }
         for(int j=middle;j<middle+i;j++)
        {
            printf("%c",word[j%len]);
        }
        printf("\n");
    }
}