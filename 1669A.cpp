#include<iostream>
#include<cstring>
using namespace std;
int main()
{
   int n,x;
   cin >> n;
   for(int i=0;i<n;i++)
   {
       cin >> x;
       if(x >= -5000 && x < 1400)
        cout << "Division 4" << endl;
       else if(x>=1400 && x < 1600)
        cout << "Division 3" << endl;
       else if(x>=1600 && x < 1900)
        cout << "Division 2" << endl;
       else if(x>=1900 && x <= 5000)
        cout << "Division 1" << endl;
   }


    return 0;
}
