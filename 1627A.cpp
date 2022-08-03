#include<stdio.h>
int main( )
{
    char s[55][55];
    int T,i,j,n,m,r,c,j1,j2,j3;
    scanf("%d",&T);
    while(T--)
    {
        j1=j2=j3=0;
        scanf("%d%d%d%d",&n,&m,&r,&c);
        getchar();
        for(i=1; i<=n; i++)
        {
            for(j=1; j<=m; j++)
            {
                scanf("%c",&s[i][j]);
                if(s[i][j]=='B'&&i==r&&j==c)
                {
                    j1=1;
                }
                else if(s[i][j]=='B'&&i!=r&&j!=c)
                {
                    j2=1;
                }
                else if(s[i][j]=='B')
                {
                    j3=1;
                }
            }
            getchar();
        }
        if(j1)
        {
            printf("0\n");
        }
        else if(j3)
        {
            printf("1\n");
        }
        else if(j2)
        {
            printf("2\n");
        }
        else
        {
            printf("-1\n");
        }
    }
    return 0;
}
