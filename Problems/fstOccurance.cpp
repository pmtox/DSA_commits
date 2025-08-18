//FIRST OCCURANCE IN A STRING PROBLEM
//NAME : PRASHANT MISHRA

class Solution {
public:
    int strStr(string haystack, string needle) { 
            int s = haystack.size();
            int a = needle.size();
        if (a ==0) return 0;
        for (int i = 0; i<= s-a ; i++){
            if( haystack.substr(i,a) == needle){
                return i;
            }
        }
        return -1;
    }
};

//WE DID THIS PROBLEM USING SUBSTR() 
