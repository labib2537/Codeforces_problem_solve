#include <iostream>
#include <string>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,cnt=0,flag=0;
    cin >> n;
    string c;
    cin >> c;
    for(int i=0; i<n; i++)
    {
        if(c[i]==c[i+1])
        {
            cnt++;
        }

    }
        cout << cnt << endl;



    return 0;
}
