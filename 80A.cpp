#include <iostream>
#include <string>


using namespace std;

int main()
{
    int n,m;
    cin >> n >> m;
    int c=0;
    int arr[] = {2,3,5,7,11,13,17,19,23,29,31,37,41,43,47};
    for(int i=0;i<15;i++)
    {
        if(arr[i]==n && arr[i+1]==m)
        {
            c=1;
            break;
        }
    }
    if(c==1)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }


    return 0;
}
