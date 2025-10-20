//1518. Water Bottles
//Leetcode Easy

class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int ans = numBottles;
        int emp = numBottles;
        while(emp >= numExchange){
            int can = emp / numExchange;
            ans += can;
            emp = can + (emp % numExchange); 
        }
        return ans;
    }
};
