//3698. Split Array With Minimum Difference
//LEETCODE MEDIUM

class Solution {
public:
    long long splitArray(vector<int>& nums) {
        int n = nums.size();
        if (n < 2) return -1;

        vector<bool> inc(n, false), dec(n, false);
        vector<long long> psum(n);

        psum[0] = nums[0];
        for (int i = 1; i < n; i++)
            psum[i] = psum[i - 1] + nums[i];

        inc[0] = true;
        for (int i = 1; i < n; i++)
            inc[i] = inc[i - 1] && nums[i] > nums[i - 1];

        dec[n - 1] = true;
        for (int i = n - 2; i >= 0; i--)
            dec[i] = dec[i + 1] && nums[i] > nums[i + 1];

        long long total = psum[n - 1];
        long long ans = LLONG_MAX;
        bool ok = false;

        for (int i = 0; i < n - 1; i++) {
            if (inc[i] && dec[i + 1]) {
                long long leftSum = psum[i];
                long long rightSum = total - psum[i];
                ans = min(ans, llabs(leftSum - rightSum));
                ok = true;
            }
        }
        return ok ? ans : -1;
    }
};
