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
            }
        }
    }
    return 0;
}
