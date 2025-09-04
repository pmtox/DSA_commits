//FIND CLOSEST PERSON PROBLEM
//NAME:PRASHANT MISHRA


class Solution {
public:
    int findClosest(int x, int y, int z) {
        int subs1 = abs(z-x);
        int subs2 = abs(z-y);
        while(subs1 !=subs2){
            if(abs(subs1)<abs(subs2)){
                return 1;
            } else if(abs(subs1)>abs(subs2)){
                return 2;
            }
        }
        return 0;
    }
};
