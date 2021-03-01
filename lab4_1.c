#include <stdio.h>
int main ()
{
    int n;
    scanf("%d",&n);
    int y[n][3],t[n-2],yt[n],b=0,w=2000,i;
    for(i=0;i<n;i++)
    {
        scanf("%d %d %d",&y[i][0],&y[i][1],&y[i][2]);
    }
    for(i=0;i<n;i++)
    {
        yt[i]=(y[i][0]*4)+(y[i][1]*2)+y[n][2];
    }
    return 0;
}
