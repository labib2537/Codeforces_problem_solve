#include <bits/stdc++.h>
#include<iostream>
#include <string.h>
using namespace std;

int main()
{
    int t,n;
    long long a,b,c,x,y,mx,mn;

    cin >> t;

    while(t--)
    {
		cin>>a>>b>>c;
		if(a>b&&a>c)
        {
            cout<<0<<" ";
        }
		else{
            cout<<max(b,c)-a+1<<" ";
		}

		if(b>c&&b>a)
        {
            cout<<0<<" ";
        }
		else
        {
            cout<<max(a,c)-b+1<<" ";
        }

		if(c>a&&c>b)
        {
            cout<<0<<endl;
        }
		else
        {
            cout<<max(a,b)-c+1<<endl;
        }


    }

}

