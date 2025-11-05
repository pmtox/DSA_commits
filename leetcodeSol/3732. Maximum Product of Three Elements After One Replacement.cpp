//3732. Maximum Product of Three Elements After One Replacement
//LEETCODE MEDIUM

class Solution {
public:
    using ll = long long;
    long long maxProduct(vector<int>& a) {
        int n = a.size();
        sort(a.begin(), a.end());
        ll maxi = (ll)a[n - 1] * (ll)a[n - 2] * 100000LL;
        maxi = max(maxi, a[0] * -100000LL * a[n - 1]);
        maxi = max(maxi, (ll)a[0] * (ll)a[1] * 100000LL);
        return maxi;
    }
};
