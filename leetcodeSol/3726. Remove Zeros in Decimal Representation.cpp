//3726. Remove Zeros in Decimal Representation
//LEETCODE EASY


class Solution {
public:
    long long removeZeros(long long n) {
        string s = to_string(n);
        string no_zeroes = "";
        for(char c : s){
            if(c!= '0'){
                no_zeroes +=c;
            }
        }
        long long result = stoll(no_zeroes);
        return result;
    }
};
