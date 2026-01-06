// 189. Rotate Array
// LEETCODE MEDIUM

class Solution {
public:
    void reverse(vector<int>& nums , int i , int j){
        while(i<j){
        int y = nums[i];
        nums[i] = nums[j];
        nums[j] = y;
        i++;
        j--;
        }
    }
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k%n;
        reverse(nums , 0 , n-k-1);
        reverse(nums , n-k , n-1);
        reverse(nums , 0 , n-1);
    }
};