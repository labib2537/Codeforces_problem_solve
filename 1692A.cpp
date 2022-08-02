#include <bits/stdc++.h>
using namespace std;

int main() {


    int t,a,b,c,d;
    cin >> t;
    while(t--)
    {
        cin >> a >> b >> c >> d;
        if(a>b && a>c && a>d)
        {
            cout << 0 << endl;
        }
        else
        {
            if(a<b && a<c && a<d)
            {
                cout << 3 << endl;
            }
            else if((a<b && a<c) || (a<d && a<c) || (a<b && a<d))
            {
                cout << 2 << endl;
            }
            else if(a<b || a<c || a<d)
            {
                cout << 1 << endl;
            }

        }

    }
  return 0;
}
