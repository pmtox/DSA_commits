//Maximum Unique Subarray Sum After Deletion
//NAME: PRASHANT MISHRA

class Solution {
public:
    int maxSum(vector<int>& nums) {
        unordered_set<int> st;
        int left = 0, currSum = 0, maxSum = 0;

        for (int right = 0; right < nums.size(); right++) {
            while (st.count(nums[right])) {
                st.erase(nums[left]);
                currSum -= nums[left];
                left++;
            }
            st.insert(nums[right]);
            currSum += nums[right];
            maxSum = max(maxSum, currSum);
        }

        return maxSum;
    }
};
