//347. Top K Frequent Elements
//LEETCODE MEDIUM

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int , int> mpp;
        for(auto it : nums){
            mpp[it]++;
        }
        vector<pair<int, int>> pr;
        for(const auto&it : mpp){
            pr.push_back({it.second , it.first});
        }
        sort(pr.rbegin() , pr.rend());
        vector<int>arr;
        for(int i =0; i< k ; i++){
            arr.push_back(pr[i].second);
        }
        return arr;
    }
};