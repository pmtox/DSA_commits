#include<bits/stdc++.h>
using namespace std;

int main() {
    long long t; cin>>t;
    for(int i = 0 ; i< t ; i++){
        long long x1 , x2 , x3 , x4;
        cin>>x1>>x2>>x3>>x4;
        if(x1 == x2 && x2== x3 && x3 == x4 && x4==x1){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
