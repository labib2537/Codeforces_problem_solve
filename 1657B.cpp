
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
        long long n, B, x, y;
        cin >> n >> B >> x >> y;
        long long a=0,s=0;
        for(int i=0;i<n;i++)
        {
            if((a+x)<=B)
            {
                a+=x;
            }
            else
            {
                a-=y;
            }
            s+=a;
        }
        cout << s << endl;



    }
}
