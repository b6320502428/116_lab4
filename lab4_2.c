#include <stdio.h>
#include <stdlib.h>
int main ()
{
    int n,i;
    scanf("%d",&n);
    char p[n][7];
    int num[n];
    for(i=0;i<n;i++)
    {
        scanf("%s",p[i]);
    }
    for(i=0;i<n;i++)
    {
        if(p[i][0]>48&&p[i][0]<58)
            num[i]=atoi(p[i]);
    }

    return 0;
}
