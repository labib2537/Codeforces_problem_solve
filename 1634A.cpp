#include <iostream>
#include <string>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,k;
        cin >> n >> k;
        string s;
        cin >> s;
        int ans=1;
        for(int i=0,j=n-1; i<j; i++,j--)
        {
            if(s[i]!=s[j] && k>0)
            {
                ans=2;
            }
        }

        cout << ans << endl;
    }
}
