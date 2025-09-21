//Reverse Integer
//NAME: PRASHANT MISHRA



class Solution {
public:
    int reverse(int x) {
    long long rev = 0;
    int minn = pow(-2 , 31);
    int maxx = pow(2 , 31) -1;
    while (x != 0) {
        int digit = x % 10;
        x /= 10;
        rev = rev * 10 + digit;
        if (rev > maxx || rev < minn) {
            return 0;
        }
    }
    return (int)rev;
    }
};
