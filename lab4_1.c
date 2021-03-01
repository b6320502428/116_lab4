#include <stdio.h>
int main ()
{
    int n;
    scanf("%d",&n);
    int y[n][3],yt[n],b,w,i,tmp,max=0,min=2000;
    for(i=0;i<n;i++)
    {
        scanf("%d %d %d",&y[i][0],&y[i][1],&y[i][2]);
    }
    for(i=0;i<n;i++)
    {
        yt[i]=(y[i][0]*4)+(y[i][1]*2)+y[n][2];
    }
    for(i=0;i<n-2;i++)
    {
        tmp=yt[i]+yt[i+1]+yt[i+2];
        if(max<=tmp)
        {
            b=i+1;
            max=tmp;
        }
        if(min>=tmp)
        {
            w=i+1;
            min=tmp;
        }
    }
    printf("%d %d",b,w);
    return 0;
}
