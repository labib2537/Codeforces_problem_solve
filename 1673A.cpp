
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
        string s;
        cin >> s;
        int sum=0,result=0;
        if(s.size()==1)
        {
            result = s[0];
            cout << "Bob "  << result-96 << endl;
            continue;
        }
        for(int i=0; i<s.size(); i++)
        {
            //result=s[i];
            sum+=s[i]-96;
        }
        if(s.size()%2!=0)
        {
            int mn=min(s[0],s[s.size()-1]);
            result=mn-96;
            cout << "Alice " << sum-result-result << endl;
        }
        else
        {
            cout << "Alice " << sum << endl;
        }


    }
}
