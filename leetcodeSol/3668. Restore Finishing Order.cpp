//Restore Finishing Order PROBLEM
//NAME: PRASHANT MISHRA
//LEETCODE EASY PROBLEM

//METHOD 1:
class Solution {
public:
    vector<int> recoverOrder(vector<int>& order, vector<int>& friends) {
        int n = order.size();
        int k = friends.size();
        vector<int> x;
        for(int i=0; i<n; i++){
            for(int j=0; j<k ; j++)
            if(order[i] == friends[j]){
                x.push_back(order[i]);
            }
        }
        return x;
    }
};
//TIME COMPLEXITY : O(m*n);
//SPACE COMPLEXITY : O(x);
