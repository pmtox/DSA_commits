//69. Sqrt(x)
//Leetcode Easy

class Solution {
public:
    int mySqrt(int x) {
    if (x < 2) return x;
        long y = x;
    while (y * y > x) {
        y = (y + x / y) / 2;
    }
    return (int)y;
    }
};
