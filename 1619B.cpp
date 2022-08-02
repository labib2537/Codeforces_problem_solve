#include <bits/stdc++.h>
using namespace std;
int t, n;
int main()
{
    cin>>t;
    while(t--)
    {
        set<int> ans;
        cin>>n;
        for (int i = 1; i*i<=n; i++)
        {
            ans.insert(i*i);
        }

        for (int i = 2; i*i*i<=n; i++)
        {
            ans.insert(i*i*i);

        }


        cout << ans.size() << endl;
    }
}

