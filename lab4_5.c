#include <stdio.h>
#include <string.h>
int main ()
{
    int n,i,j,g[4]= {1,0,0,0},tmp;
    scanf("%d",&n);
    char op[51];
    for(i=0; i<n; i++)
    {
        scanf("%s",op);
        for(j=0; j<51; j++)
        {
            switch(op[j])
            {
            case 'A':
                tmp=g[1];
                g[1]=g[2];
                g[2]=tmp;
                break;
            case 'B':
                tmp=g[0];
                g[0]=g[3];
                g[3]=tmp;
                break;
            case 'C':
                tmp=g[0];
                g[0]=g[2];
                g[2]=tmp;
                tmp=g[1];
                g[1]=g[3];
                g[3]=tmp;
                break;
            case 'D':
                tmp=g[0];
                g[0]=g[1];
                g[1]=tmp;
                tmp=g[2];
                g[2]=g[3];
                g[3]=tmp;
                break;
            case 'E':
                tmp=g[0];
                g[0]=g[3];
                g[3]=tmp;
                tmp=g[1];
                g[1]=g[2];
                g[2]=tmp;
                break;
            default:
                tmp=0;
            }
        }
    }
    return 0;
}
