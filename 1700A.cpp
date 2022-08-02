#include <bits/stdc++.h>
#include<iostream>
#include <string.h>
using namespace std;

int main()
{
    long long i,t,j,n,m;

    cin >> t;
    while(t--)
    {
        cin >> n >> m;
        long long ans = (m*(m-1)) / 2;

        ans += m* ((n* (n+1)) /2);
        cout << ans << "\n";




    }
    return 0;
}
