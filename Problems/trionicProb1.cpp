//TRIONIC ARRAY-1 PROBLEM
//NAME: PRASHANT MISHRA

class Solution {
public:
    bool isTrionic(vector<int>& nums) {
        int size = nums.size();
        if (size < 4) return false;
        
        for (int p = 1; p < size - 2; p++) {
            bool increment1 = true;
            for (int i = 0; i < p; i++) {
                if (nums[i] >= nums[i+1]) {
                    increment1 = false;
                    break;
                }
            }
            if (!increment1) continue;

            for (int k = p + 1; k < size - 1; k++) {
                bool decrement = true;
                for (int i = p; i < k; i++) {
                    if (nums[i] <= nums[i+1]) {
                        decrement = false;
                        break;
                    }
                }
                if (!decrement) continue;
                bool increment2 = true;
                for (int i = k; i < size - 1; i++) {
                    if (nums[i] >= nums[i+1]) {
                        increment2 = false;
                        break;
                    }
                }

                if (increment2) return true;
            }
        }

        return false;
    }
};


//
