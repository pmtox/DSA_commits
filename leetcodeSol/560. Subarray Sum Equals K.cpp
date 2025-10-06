//560. Subarray Sum Equals K
//Medium Type Problem


class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<long long,int> freq; 
        long long prefix = 0;
        int count = 0;
        freq[0] = 1;

        for (int x : nums) {
            prefix += x;
            if (freq.count(prefix - k)) {
                count += freq[prefix - k];
            }
            freq[prefix]++;
        }
        return count;
    }
};
