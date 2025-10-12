//3712. Sum of Elements With Frequency Divisible by K
//LEETCODE EASY PROBLEM

class Solution {
public:
    int sumDivisibleByK(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int , int> mpp;
        for(int i =0; i<n;i++){
            mpp[nums[i]]++;
        }
        int kns = 0;
        for(auto it : nums){
            if(mpp[it] % k == 0){
                kns+=it;
            }
        }
        return kns;
    }
};
