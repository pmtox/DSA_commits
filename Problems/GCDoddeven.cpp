//GCD of Odd and Even Sums PROBLEM
//NAME:PRASHANT MISHRA


class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        long long sumOdd= n*n;
        long long sumEven = n*(n+1);
        long long resultGcd = gcd(sumOdd , sumEven);
        return resultGcd;
    }
};

//WE were doing first n ODD AND EVENS.
