class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size();       // number of rows
        int n = matrix[0].size();    // number of columns

        vector<int> rows(m, 0);   // to mark rows
        vector<int> cols(n, 0);   // to mark cols

        // Step 1: Mark rows and columns
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(matrix[i][j] == 0){
                    rows[i] = 1;
                    cols[j] = 1;
                }
            }
        }

        // Step 2: Set zeroes
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(rows[i] == 1 || cols[j] == 1){
                    matrix[i][j] = 0;
                }
            }
        }
    }
};
