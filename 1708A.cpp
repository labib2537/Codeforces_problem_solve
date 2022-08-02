#include <bits/stdc++.h>
#include<iostream>
#include <string.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,a, ans = 1;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        a = arr[0];
        for(int i=0;i<n;i++){
            if(arr[i]%a != 0){

                ans = 0;
            }
        }
        if(ans){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    return 0;

}
