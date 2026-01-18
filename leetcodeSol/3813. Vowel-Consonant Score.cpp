// 3813. Vowel-Consonant Score
// LEETCODE EASY

class Solution {
public:
    int vowelConsonantScore(string s) {
        int v = 0;
        int c = 0;
        for(char ch : s){
            ch = tolower(ch);
            if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch== 'u'){
                v++;
            }else if(ch >= 'a' && ch <= 'z'){
                c++;
            }
        }
        if(c>0){
            return v/c;
        }
        return 0;
    }
};