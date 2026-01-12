// 217. Contains Duplicate
// LEETCODE EASY

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int , int> mpp;
        for(auto &it : nums){
            mpp[it]++;
        }
        for(auto &i : mpp){
            if(i.second > 1){
                return true;
            }
        }
        return false;
    }
};