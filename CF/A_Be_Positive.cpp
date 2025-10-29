#include<bits/stdc++.h>
using namespace std;

void chk(vector<int>& nums){
    int count0 = 0, countNeg = 0;
    for (int x : nums) {
        if (x == 0) count0++;
        else if (x == -1) countNeg++;
    }
    long long ans = count0;
    if (countNeg % 2 != 0) ans += 2;
    cout << ans << endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
int t;cin>>t;
int a; 
while(t--){
    cin>>a;
    vector<int>nums;
    for(int i =0;i<a;i++){
        int x; cin>>x;
        nums.push_back(x);
        }
    chk(nums);
    }
}