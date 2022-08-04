#include <bits/stdc++.h>
#include<iostream>
#include <string.h>
using namespace std;

int main()
{
    int t,cnt;

    char change;
    cin >> t;
    while(t--)
    {
        int n,m,x;
        cin >> n;
        set<int> s;
        for(int i=0;i<n;i++)
        {
            cin >> x;
            s.insert(x);

        }

        int a = s.size();
        int b = abs(n-a);


        if(b%2==0)
        {
            cout << a << endl;
        }
        else{
            cout << a-1 << endl;
        }
    }
}
