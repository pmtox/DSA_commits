//3713. Longest Balanced Substring I
//LEETCODE MEDIUM PROBLEM

class Solution {
public:
    int longestBalanced(string s) {
        int n = s.size();
        int maxLen = 0;

        for (int i = 0; i < n; i++) {
            vector<int> freq(26, 0);
            int dis = 0;
            for (int j = i; j < n; j++) {
                int idx = s[j] - 'a';
                if (freq[idx] == 0) dis++;
                freq[idx]++;
                int minFreq = INT_MAX, maxFreq = 0;
                for (int f : freq) {
                    if (f == 0) continue;
                    minFreq = min(minFreq, f);
                    maxFreq = max(maxFreq, f);
                }
                if (minFreq == maxFreq)
                    maxLen = max(maxLen, j - i + 1);
            }
        }
        return maxLen;
    }
};
