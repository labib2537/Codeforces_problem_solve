#include <bits/stdc++.h>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
int t,n;
int main()
{
    int H,M,h,m,looplimit;
    cin >> t;
    while(t--)
    {
        cin >> n;
        vector<int> a(n);
        bool flag = 0;
        for (int i=0; i<n; i++)
        {
            cin >> a[i];
            while (!(a[i]%10==0 || a[i]%10==2))
            {
                a[i]= a[i] + a[i]%10;
            }
            if (a[i]%10==2){
                a[i]%=20;
            }
        }
        //check all elements of array are same or not
        for(int i = 0; i < n - 1; i++)
        {
            if(a[i] != a[i + 1])
                flag = 1;
        }


        if(flag==0)
        {
            cout << "YES" <<endl;
        }
        else
        {
            cout << "NO" <<endl;
        }

    }
}
