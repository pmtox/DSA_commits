//11. Container With Most Water
//Leetcode Medium


class Solution {
public:
    int maxArea(vector<int>& height) {
        int right =height.size()-1, left = 0;
        int maxArea = 0;
        while(left < right){
            int width = right - left;
            int h = min(height[left] , height[right]);
            int area = width*h;
            maxArea = max( area , maxArea);
            if(height[left] < height[right]){
                left++;
            }else{
                right--;
            }
        }
        return maxArea;
    }
};
