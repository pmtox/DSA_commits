//2011. Final Value of Variable After Performing Operations
//Leetcode Easy

class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int X = 0;
        string n1 = "++X";
        string n2 = "X++";
        string k1 = "X--";
        string k2 = "--X";
        for(int i = 0; i<operations.size() ; i++){
            if(operations[i] == n1 || operations[i] == n2){
                X+=1;
            }else{
                X-=1;
            }
        } 
        return X;
    }
};
