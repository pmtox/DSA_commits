//Restore Finishing Order PROBLEM
//NAME: PRASHANT MISHRA

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


//METHOD 2:
class Solution {
public:
    vector<int> recoverOrder(vector<int>& order, vector<int>& friends) {
        vector<int> k;
        unordered_map<int , int> mpp;
        for(int f:friends){
            mpp[f]++;
        }
        for(int i = 0; i<order.size() ; i++){
            if(mpp.find(order[i]) != mpp.end()){
                k.push_back(order[i]);
            }
        }
        return k;
    }
};

//TIME COMPLEXITY : O(m) , m= friends;
//SPACE COMPLEXITY : O(k);
