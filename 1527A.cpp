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
        int n;
        cin >> n;
        int x = 1<<(int)log2(n);
        cout << x-1 << endl;

    }
}
