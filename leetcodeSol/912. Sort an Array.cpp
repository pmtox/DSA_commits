// 912. Sort an Array
// LEETCODE MEDIUM


//----MERGE SORT----//


class Solution {
public:
    void merge(vector<int>& nums , int low , int mid , int high){
        vector<int>temp;
        int left = low;
        int right = mid+1;
        while(left<= mid && right<= high){
            if(nums[left] <= nums[right]){
                temp.push_back(nums[left]);
                left++;
            }
            else{
                temp.push_back(nums[right]);
                right++;
            }
        }
        while(left<= mid){
            temp.push_back(nums[left]);
            left++;
        }
        while(right <= high){
            temp.push_back(nums[right]);
            right++;
        }
        for(int i=low; i<= high; i++){
            nums[i] = temp[i - low];
        }
    }
    void mv(vector<int>& nums , int low , int high){
        if(high <= low){
            return;
        }
        int mid = (low + high) / 2;
        mv(nums , low , mid);
        mv(nums , mid+1 , high);
        merge(nums , low , mid , high);
    }
    void ms(vector<int>& nums , int n){
        mv(nums , 0 , n-1);
    }
    vector<int> sortArray(vector<int>& nums) {
        int n = nums.size();
        ms(nums , n);
        return nums;
    }
};