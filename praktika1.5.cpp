#include <stdio.h>
#include <string.h> 
#include <iostream>
int main()
{
    char s[100]; 
    int n,k,i;
    printf("vvedite stroku\n");
    gets(s);
    n=strlen(s);
    k=(80-n)/2;
    for(i=0;i<k;i++) printf(" "); 
	    printf("%s\n",s);
    system("pause");
    return 0;
}