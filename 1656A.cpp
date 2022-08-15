
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
        long n;
        cin >> n;
        int a[n];
        int maxn = -2e9, maxi;
        int minn = 2e9, mini;
        for(int i=1;i<=n;i++)
        {
            cin >> a[i];
            if(a[i]>maxn)
            {
                maxn = a[i];
                maxi = i;
            }
            if(a[i]<minn)
            {
                minn = a[i];
                mini = i;
            }
        }
        cout << mini << " " << maxi << endl;
    }
}
