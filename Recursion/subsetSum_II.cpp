#include<bits/stdc++.h>
using namespace std;

void fxn(int idx , vector<int>& arr , vector<int> &ds , vector<vector<int>> &ans1){
    ans1.push_back(ds);
    for(int i = idx ; i < arr.size(); i++){
        if(idx != i && arr[i] == arr[i-1]) continue;
        ds.push_back(arr[i]);
        fxn(i+1 , arr , ds , ans1);
        ds.pop_back();
    }
}

vector<vector<int>> subSet(vector<int>& arr , int &n){
    vector<vector<int>> ans1;
    vector<int>ds;
    sort(arr.begin() , arr.end());
    fxn(0 , arr , ds , ans1);
    return ans1;
}

int main(){
    int n ; cin>>n;
    vector<int> arr(n);
    for(int i = 0 ; i < n ; i++){
        cin>>arr[i];
    }
    vector<vector<int>> ans = subSet(arr , n);
    sort(ans.begin() , ans.end());
    for(int i = 0; i < ans.size(); i++) {
        cout << "[";
        for(int j = 0; j < ans[i].size(); j++) {
            cout << ans[i][j];
            if(j < ans[i].size() - 1) cout << ", ";
        }
        cout << "] ";
    }
    return 0;
}