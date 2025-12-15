//PROBLEM OF 
//NUMBER OF PERFECT PAIRS
//NAME : PRASHANT MISHRA

class Solution {
public:
    long long perfectPairs(vector<int>& nums) {
        int n = nums.size();
        long long count = 0;
        for (int i=0; i <n ; i++){
            for (int j = i+1 ; j< n; j++){
                long long a = nums[i] , b = nums[j];
                long long left = min(abs(a-b) , abs(a+b));
                long long right = min(abs(a) , abs(b));
                if (left <= right){
                    count++;
                }
            }
        } return count;
    }
};


//STILL THIS IS A BRUTE FORCE WAY OF DOING this problem but it has TLE error at LC.
//still will update this after learning new concepts.
//THANKS!
