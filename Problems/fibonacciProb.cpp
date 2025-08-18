//Fibonacci Number PROBLEM
//NAME : PRASHANT MISHRA

class Solution {
public:
    int fib(int n) {
        if(n<=1) return n;
        int last = fib(n-1);
        int slast = fib(n-2);
        return last + slast;
    }
};

//WE DID IT USING RECURSIVE WAY.
