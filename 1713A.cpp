#include <iostream>
#include <string>


using namespace std;

int main()
{

    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        long long x[n],y[n],c=0,d=0,e=0,f=0;
        for(int i=0; i<n; i++)
        {
            cin >> x[i] >> y[i];
            if(x[i]>c)
            {
                c = x[i];
            }
            if(y[i]>d)
            {
                d = y[i];
            }
            if(x[i]<e)
            {
                e = x[i];
            }
            if(y[i]<f)
            {
                f = y[i];
            }


        }
        long long s = 2*(c + d + abs(e) + abs(f));

        cout << s << endl;

    }




    return 0;
}
