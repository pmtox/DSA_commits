#include<bits/stdc++.h>
using namespace std;
void fxn(int ind , int sum , vector<int>& arr , int &n , vector<int>& subset){
    if(ind == n){
        subset.push_back(sum);
        return;
    }
    // pick thing
    fxn(ind + 1 , sum+arr[ind] , arr , n , subset);

    // unpick thing
    fxn(ind + 1 , sum , arr , n , subset);
}
vector<int> sub(vector<int> &arr , int &n){
    vector<int> subset;
    fxn(0 , 0 , arr , n , subset);
    sort(subset.begin() , subset.end());
    return subset;
}
int main(){
    int n; cin>>n;
    vector<int> arr(n);
    for(int i = 0 ; i < n ; i++){
        cin>>arr[i];
    }
    vector<int> ans = sub(arr , n);
    for(int i = 0 ; i < ans.size(); i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}