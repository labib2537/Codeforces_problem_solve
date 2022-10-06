
//
//
//
//
//        **********************
//        **********************                   *
//        **********************
//        *****
//        *****
//        *****************
//        *****************     **            ***********      *****     ****    ****           **             *********       *****
//        *****************    ****           ************     *****     ****    ****          ****            **********      *****
//        *****               ******          *****    ***     *****     ****    ****         ******           ***** *****     *****
//        *****              ********         *****    ***     *****     ************        ********          *****  *****    *****
//        *****             **********        ***********      *****     ************       **********         *****   *****   *****
//        *****            ************       **********       *****     ************      ************        *****    *****  *****
//        *****           *****    *****      *****  ****      *****     ****    ****     *****    *****       *****     ***** *****
//        *****          *****      *****     *****   ****     *****     ****    ****    *****      *****      *****      **********
//        *****         *****        *****    *****    ****    *****     ****    ****   *****        *****     *****       *********
//
//
//



/*

 flag condition **********
if(flag==1)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" <<endl;
        }
*/


#include <iostream>
#include <string>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
//long long a[200010];

//int a[100000], b[100000];
const int N = 1e5+3;
typedef long long ll;
void bitwise_op()
{
    // a = 5(00000101), b = 9(00001001)
    int a = 5, b = 9;

    // The result is 00000001
    cout<<"a = " << a <<","<< " b = " << b <<endl;
    cout << "a & b = " << (a & b) << endl;

    // The result is 00001101
    cout << "a | b = " << (a | b) << endl;

    // The result is 00001100
    cout << "a ^ b = " << (a ^ b) << endl;

    // The result is 11111010
    cout << "~a = " << (~a) << endl;

    // The result is 00010010
    cout<<"b << 1" <<" = "<< (b << 1) <<endl;

    // The result is 00000100
    cout<<"b >> 1 "<<"= " << (b >> 1 )<<endl;

}

void reverseStr(string& str)
{
    int n = str.length();

    // Swap character starting from two
    // corners
    for (int i = 0; i < n / 2; i++)
        swap(str[i], str[n - i - 1]);
}

int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int cmp(int a, int b)
{
    return a>b;
}
//ll a[101], c=0,n;
/*
void hex(ll a)
{
    if(a<=n)
    {
        c++;
        hex(a*10);
        hex(a*10+1);
    }
}
*/

ll b[101],n,x,t,z=0,m,o=0,k,cnt=0;
ll mx=-1e9, mn=1e9;
ll c[10];
string s1;
ll a[10001];


void solve()
{

}


int main()
{
   ll a,b,e,f,zero=0;
   cin >> a;
   cout << a/2 + 1 << endl;









    // problem B


    /*ll a[n],b[n], s=0;
       for(ll i=0;i<n;i++)
       {
           cin >> a[i];
       }
       sort(a,a+n);
       for(ll i=1;i<n;i++)
       {
           b[i]=a[i]/a[0];
           s|=b[i];
           cout << b[i] << " ";
       }
       cout << s << endl;*/

    //cout << s << endl;




    /*   for(ll i=n/2+1;i<=n;i++)
       {
           //cout << i <<

          // cout << i << " " << j << " ";
          // cout << a[i] << " " << a[j] << " ";
          ll z=1;
          for(ll j=1;j<=i/2;j++)
          {
              if(a[i]==1 && a[j]==0 || a[i]==0 && a[j]==1)
              {
                  s+=b[z]*2;
              }
              else
              {
                  s+=b[z];
              }
          }
          z++;
    */

//cout << s << endl;

    /*  ll n, k;
      cin >> n >> k;
      ll a[n], flag=0;
      for(ll i=0;i<k;i++)
      {
          cin >> a[i];
          if(n-a[i]+1==0)
          {
              flag=1;
          }
      }
      if(flag==1)
      {
          cout << "NO" << endl;
      }
      else
      {
          cout << "YES" << endl;
      }*/





    /*   else
       {
           cout << 0 << endl;
       }
    */

    /*
    string s;
    cin >> s;
    char mn='9';
    for(ll i=s.size()-1; i>=0; i--)
    {
        if(s[i]>mn)
        {
            s[i] = min((int)s[i]+1,(int)'9');
        }
        else
        {
            mn = s[i];
        }
    }
    sort(s.begin(), s.end());

    cout << s << endl;
    }
    */

}






