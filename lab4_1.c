#include <stdio.h>
int main ()
{
    int n;
    scanf("%d",&n);
    int y[n][3],t[n-2],yt[n],b,w,i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&y[i][j]);
        }
    }
    return 0;
}
