//73. Set Matrix Zeroes
//Leetcode Easy

// T.C. O((N*M) * (N+M))
// S.C. O(N*M)

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        vector<vector<int>> vis = matrix;
        for(int i = 0 ; i < n ; i++){
            for(int j = 0 ; j < m ; j++){
                if(matrix[i][j] == 0){
                    for(int k = 0; k < m ; k++){   
                        //move across all columns of the specific row;
                        //and making em' zero(0);
                        vis[i][k] = 0;                 
                    }
                }
            }
        }
        for(int i = 0 ; i < n ; i++){
            for(int j = 0 ; j< m ; j++){
                if(matrix[i][j]==0){
                    for(int k = 0 ; k< n ; k++){
                        vis[k][j]=0;
                    }
                }
            }
        }
        for(int i = 0 ; i < n ; i++){
            for(int j = 0 ; j < m ; j++){
                matrix[i][j] = vis[i][j];
            }
        }
    }
};


// T.C. -> O((N*M) * (N+M))
// S.C. -> O(1)

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(matrix[i][j] == 0){
                    for(int k=0; k<m; k++){
                        if(matrix[i][k] != 0){
                            matrix[i][k] = -9999;
                        }
                    }
                }
            }
        }
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(matrix[i][j] == 0){
                    for(int k=0; k<n; k++){
                        if(matrix[k][j] != 0){
                            matrix[k][j] = -9999;
                        }
                    }
                }
            }
        }
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(matrix[i][j] == -9999){
                    matrix[i][j] = 0;
                }
            }
        }
    }
};




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

// T.C. O(2*(N*M))
// S.C. O(1)


