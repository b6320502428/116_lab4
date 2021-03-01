#include <stdio.h>
#include <string.h>
int main ()
{
    int i,j=1,tmp=0;
    char str[1001],ans[501]="";
    scanf("%[^\n]s",str);
    ans[0]=str[0]-32;
    for(i=1; i<strlen(str); i++)
    {
        if(str[i-1]==' ')
        {
            if(str[i]=='i'&&str[i+1]==' ');
            else if(str[i]=='a'&&str[i+1]==' ');
            else if(str[i]=='o'&&str[i+1]=='f'&&str[i+2]==' ');
            else if(str[i]=='i'&&str[i+1]=='n'&&str[i+2]==' ');
            else if(str[i]=='o'&&str[i+1]=='n'&&str[i+2]==' ');
            else if(str[i]=='a'&&str[i+1]=='t'&&str[i+2]==' ');
            else if(str[i]=='a'&&str[i+1]=='n'&&str[i+2]==' ');
            else if(str[i]=='t'&&str[i+1]=='h'&&str[i+2]=='e'&&str[i+3]==' ');
            else if(str[i]=='f'&&str[i+1]=='o'&&str[i+2]=='r'&&str[i+3]==' ');
            else if(str[i]=='a'&&str[i+1]=='n'&&str[i+2]=='d'&&str[i+3]==' ');
            else if(str[i]=='w'&&str[i+1]=='i'&&str[i+2]=='t'&&str[i+3]=='h'&&str[i+4]==' ');
            else if(str[i]=='\0');
            else if(str[i]=='\n');
            else
            {
                //tmp++;
                ans[j]=str[i]-32;
                j++;
            }
        }
    }
    printf("%s\n",ans);
    //printf("%d\n",tmp);
    //printf("%d",strlen(str));
    return 0;
}
