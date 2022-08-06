#include<iostream>
//include <bits/stdc++.h>


using namespace std;


 int main(){
     char a[8][8];
     int t;cin>>t;
     while(t--){
        for(int i=0 ;i<8;i++){
            for(int j=0 ;j<8;j++){
                cin>>a[i][j];
            }
        }
        for(int i=0 ;i<8;i++){
            for(int j=0 ;j<8;j++){

                if((a[i-2][j]=='#' && a[i-2][j+2]=='#')&&(a[i][j]=='#' && a[i][j+2]=='#')){

                  cout<<i<<" "<<j+2<<endl;
                  break;
                }


            }
        }


     }

    return 0;
}
