//3783. Mirror Distance of an Integer
// leetcode EASY

class Solution {
public:
    int mirrorDistance(int n) {
        int rev = 0;
        int km = n;
        while(n>0){
            int dig = n%10;
            rev = rev * 10 + dig;
            n = n / 10;
        }
        return abs(km - rev);
    }
};
