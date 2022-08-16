
#include <iostream>
#include <string>
#include <bits/stdc++.h>

using namespace std;
//long long a[200010];


int main()
{
    int t;
    string s[100];
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n;
        cin>>m;

        int ans=1e7;

        for(int i=0; i<n; i++)
        {
            cin>>s[i];
        }
        for(int i=0; i<n-1; i++)
        {
            for(int j=i+1; j<n; j++)
            {
                int tmp=0;
                for(int k=0; k<m; k++)
                {
                    tmp+=abs(s[i][k]-s[j][k]);
                }

                ans=min(ans,tmp);
            }


        }
        cout<<ans<<endl;

    }

}
