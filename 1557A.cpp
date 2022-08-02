#include <bits/stdc++.h>
#include<string>
using namespace std;
int t;
int main()
{
    cin>>t;
    long double s;
    long long n,mx;
    while(t--)
    {
        cin>>n;
        long long a[n];
        s = 0;
        for(int i=0; i<n; i++)
        {
            cin >> a[i];
            s+=a[i];

        }
        sort(a,a+n);

        for(int i=0;i<n;i++)
        {
            mx = a[n-1];
        }
        double fs = mx + (s-mx)/(n-1);
        printf("%.9lf\n",fs);


    }
}

