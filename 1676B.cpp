#include<iostream>
#include<cstring>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;

    cin >> t;

    while(t--)
    {
        cin >> n;
        vector<long long> a(n);
        long long minimum=INT_MAX;
        for(int i=0; i<n; i++)
        {
            cin >> a[i];
            minimum = min(minimum, a[i]);
        }
        long long sum=0;
        for(int i=0; i<n; i++)
        {
            sum += a[i] - minimum;

        }

        cout << sum << endl;

    }



    return 0;
}
