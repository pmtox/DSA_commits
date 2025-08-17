//First Unique Character in a String problem
//NAME : PRASHANT MISHRA

class Solution {
public:
    int firstUniqChar(string s) {
        int n = s.size();
        for(int i = 0; i<n ; i++){
            if(s.find(s[i]) == s.rfind(s[i])){
                return i;
            }
        }
        return -1;
    }
};

//
