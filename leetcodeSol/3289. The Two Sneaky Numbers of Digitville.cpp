//3289. The Two Sneaky Numbers of Digitville
//LEETCODE EASY


class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        unordered_map<int , int >mpp;
        for(auto it: nums){
            mpp[it]++;
        }
        vector<int> ans;
        for(auto p : mpp){
            if(p.second == 2) ans.push_back(p.first);
        }
        sort(ans.begin() , ans.end());
        return ans;
    }
};
