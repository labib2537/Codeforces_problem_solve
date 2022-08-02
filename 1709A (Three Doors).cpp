#include<iostream>
#include<cstring>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,x,a,b,c,swap;
    cin >> t;

    while(t--)
    {
        cin >> x >> a >> b >> c;
        vector<int> v = {a,b,c};
        int c=0;
        x = v[x-1];
        if(x!=0)
        {
            c++;
            x = v[x-1];
        }
        if(x!=0)
        {
            c++;
            x = v[x-1];
        }
        if(x!=0)
        {
            c++;
            x = v[x-1];
        }

        if(c==2){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }

    }



    return 0;
}
