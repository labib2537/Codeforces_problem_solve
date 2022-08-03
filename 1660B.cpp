#include <bits/stdc++.h>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
int t,n;
int main()
{

    cin >> t;
    while(t--)
    {

        cin >> n;
        long long a[n];
        for(int i=0; i<n; i++)
        {
            cin >> a[i];
        }
        sort(a,a+n);
        if(n==1)
        {
            if(a[0]==1)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
        else
        {
            if(a[n-1]-a[n-2]>1)
            {
                cout << "NO" << endl;
            }
            else{
                cout << "YES" << endl;
            }

        }



    }
}
