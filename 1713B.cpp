#include <iostream>
#include <string>


using namespace std;

int main()
{

    int t;
    cin >> t;
    while(t--)
    {
        long n;
        cin >> n;
        long long a[n];
        for(int i=0; i<n; i++)
        {
            cin >> a[i];


        }
        bool no = false;

        for(int i=1; i<n; i++)
        {
            if(a[i]<a[i-1])
            {
                for(int j=i+1; j<n; j++)
                {
                    if(a[j]>a[j-1])
                    {
                        no = true;
                        break;
                    }

                }
                break;
            }
        }

        if(no)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }

    }




    return 0;
}
