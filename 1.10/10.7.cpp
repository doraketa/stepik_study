#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int i,j;
    char str[20],str1[20];

    gets(str);
    j=0;
    
    for(i = strlen(str) - 1; i >= 0; i--)
    {
        str1[j]=str[i];
        j++;
    }
    
    str1[j]=0;
    if(strcmp(str,str1)==0)
        puts("yes\n");
    else
        puts("no\n");
    
    return 0;
}