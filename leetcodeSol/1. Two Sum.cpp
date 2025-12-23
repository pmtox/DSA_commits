//TWO SUM PROBLEM
//AUTHOR :: PRASHANT MISHRA


#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if (nums[i] + nums[j] == target) {
                    return {i, j};
                }
            }
        }
        return {};
    }
};
//above class was written at @leetcode 



int main() {
    vector<int> nums = {8, 6, 19, 15};
    int target = 25;

    Solution obj;
    vector<int> result = obj.twoSum(nums, target);

    if (!result.empty()) {
        cout << "Indices: " << result[0] << " and " << result[1] << endl;
        cout << "Values: " << nums[result[0]] << " and " << nums[result[1]] << endl;
    } else {
        cout << "No two numbers sum up to the target." << endl;
    }

    return 0;
}
