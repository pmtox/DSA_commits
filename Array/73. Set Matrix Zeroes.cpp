//73. Set Matrix Zeroes
//Leetcode Easy



// T.C. -> O(N*M)
// S.C. -> O(N+M)

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix[0].size();
        int n = matrix.size();
        unordered_set<int> setRow;
        unordered_set<int> setColumn;
        for(int i = 0; i < n ; i++){
            for(int j = 0 ; j < m ; j++){
                if(matrix[i][j] == 0){
                    setRow.insert(i);
                    setColumn.insert(j);
                }
            }
        }
        for(int i = 0 ; i < n ; i++){
            for(int j = 0 ; j<m ; j++){
                if(setRow.count(i) || setColumn.count(j)){
                    matrix[i][j] = 0;
                }
            }
        }
    }
};
