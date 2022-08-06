#include<iostream>
#include <bits/stdc++.h>


using namespace std;


int main()
{
    int t,rev,n,rem,i;
    string k;
    cin>>t;
    while(t--)
    {
        cin >> n;
        int a[n];
        for(i=0;i<n;i++)
        {
            cin >> a[i];
        }
        for(i=0;i<n-1;i++)
        {
            if(i==n-2)
            {
                if(a[i]==a[i-1])
                {
                    cout << i+2 << endl;
                    break;
                }
                else
                {
                    cout << i+1 << endl;
                    break;
                }
            }

            if(a[i]!=a[i+1])
            {
                if(a[i]==a[i+2])
                {
                    cout << i+2 << endl;
                    break;
                }
                else
                {
                    cout << i+1 << endl;
                    break;
                }
            }
        }




    }

    return 0;
}
