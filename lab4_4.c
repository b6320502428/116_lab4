#include <stdio.h>
#include <string.h>
int main ()
{
    int i,j=1;
    char str[1001],ans[501];
    scanf("%s",str);
    ans[0]=str[0]+32;
    for(i=1; i<strlen(str); i++)
    {
        if(str[i-1]==' ')
        {
            if(str[i]=='i');
            else if(str[i]=='a');
            else if(str[i]=='o'&&str[i+1]=='f');
            else if(str[i]=='i'&&str[i+1]=='n');
            else if(str[i]=='o'&&str[i+1]=='n');
            else if(str[i]=='a'&&str[i+1]=='t');
            else if(str[i]=='a'&&str[i+1]=='n');
            else if(str[i]=='t'&&str[i+1]=='h'&&str[i+2]=='e');
            else if(str[i]=='f'&&str[i+1]=='o'&&str[i+2]=='r');
            else if(str[i]=='a'&&str[i+1]=='n'&&str[i+2]=='d');
            else if(str[i]=='w'&&str[i+1]=='i'&&str[i+2]=='t'&&str[i+3]=='h');
            else
            {
                ans[j]=str[i]+32;
                j++;
            }
        }
    }
    printf("%s",ans);
    return 0;
}
