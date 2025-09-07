//Minimum Operations to Equalize Array PROBLEM
//NAME: PRASHANT MISHRA


class Solution {
public:
    int minOperations(vector<int>& nums) {
        int n = nums.size();
        for(int i =0; i<n ; i++){
            if(nums[i] != nums[0]){
                return 1;
            }
        }
        return 0;
    }
};

//complexity:O(n);
