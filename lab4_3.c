#include <stdio.h>
int main ()
{
    char str[201],ans[201];
    scanf("%s",str);
    int i,j=1;
    ans[0]=str[0];
    for(i=1;i<201;i++)
    {
        if(str[i]!=str[i-1])
        {
            ans[j]=str[i];
            j++;
        }
    }
    printf("%s",ans);
    return 0;
}
