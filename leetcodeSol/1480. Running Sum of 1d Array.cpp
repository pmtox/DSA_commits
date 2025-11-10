//1480. Running Sum of 1d Array
//LEETCODE EASY


class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> psum(nums.size());
            psum[0] = nums[0];

        for (int i = 1; i < nums.size(); i++) {
            psum[i] = psum[i - 1] + nums[i];
        }
        return psum;
    }
};
