//Take discount or Not
//NAME: PRASHANT MISHRA

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    int sum1 =0;
    int sum2=0;
    while(t--){
        int n,x,y;
        cin>>n>>x>>y;
        int a[n];
        int mxx_with_sum = 0;
        int mxx_with_cou = x;
        for(int i=0;i<n;i++){
            cin>>a[i];
            mxx_with_sum +=a[i];
            mxx_with_cou +=max(a[i] -y , 0);
        }
        if(mxx_with_sum > mxx_with_cou){
            cout<<"COUPON"<<endl;
        }
        else{
            cout<<"NO COUPON"<<endl;
        }
        
    }

}
