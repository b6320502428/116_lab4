#include <stdio.h>
#include <string.h>
int main ()
{
    int n,i;
    scanf("%d",&n);
    char p[n][7];
    for(i=0;i<n;i++);
    {
        scanf("%s",p[i]);
    }
    for(i=0;i<n;i++);
    {
        printf("%s\n",p[i]);
    }
    return 0;
}
