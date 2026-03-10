#include<iostream>
#include<vector>
using namespace std;
void isComb(int ind , int target , vector<int> &arr , vector<vector<int>> &ans , vector<int> &ds){
    int n = arr.size();
    if(ind == n){
        if(target == 0){
            ans.push_back(ds);
        }
        return ;
    }
    if(arr[ind] <= target){
        ds.push_back(arr[ind]);
        isComb(ind , target - arr[ind] , arr , ans , ds);
        ds.pop_back();
    }
    isComb(ind +1 , target , arr , ans , ds);
}

int main(){
    int n ; cin>>n;
    vector<int> arr(n);
    for(int i =0; i< n ; i++){
        cin>>arr[i];
    }

    vector<vector<int>> ans;
    vector<int> ds;
    int target; cin>>target;
    isComb(0 , target , arr , ans , ds);
    
    for (auto &v : ans) {
        for (int x : v) cout << x << " ";
        cout << endl;
    }
    return 0;
}