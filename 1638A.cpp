#include <bits/stdc++.h>
#include<iostream>
#include <string.h>
using namespace std;

int main()
{
    int t,a,c,n;

    cin >> t;

    while(t--)
    {
         cin >> n;
        int check=0, end_point=0, start_point=0, a[n+1];  // array a[n+1] for handle time limit error
        for(int i=1; i<=n; i++)
        {
             cin >> a[i];
        }
        for(int i=1; i<=n; i++)
        {
            if(check==a[i])
            {
                end_point = i;
            }
            if(a[i]!=i && check==0)
            {
                start_point = i;
                check=i;
            }
        }
        reverse(a + start_point, a+ end_point +1);

        for(int i=1; i<=n; i++)
        {
            cout << a[i] << " " ;
        }
        cout << endl;


    }
}
