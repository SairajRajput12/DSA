class Solution {

    bool isJayaz(int row,int col,int m,int n){
        if(row == m or col == n or row < 0 or col < 0){
            return false; 
        }
        return true; 
    }

public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& matrix) {
        // this problem can be solved using dfs 
        // hame nearest -> means hame minimym distance chahiye kiska ?? 
        // 0 ka 
        // so we will use dfs traversal

        queue<pair<int,int>> q; 
        vector<vector<int>> dis(matrix.size(),vector<int>(matrix[0].size(),-1)); 

        for(int i = 0; i < matrix.size(); i ++){
            for(int j = 0; j < matrix[0].size(); j ++){
                if(matrix[i][j] == 0){
                    q.push({i,j}); 
                    dis[i][j] = 0; 
                }
            }
        }

        int x[] = {0,0,-1,1}; 
        int y[] = {-1,1,0,0}; 

        while(!q.empty()){
            auto it = q.front(); 
            q.pop(); 

            int currentRow = it.first; 
            int currentCol = it.second; 
            for(int i = 0; i < 4; i ++){
                int a = currentRow + x[i]; 
                int b = currentCol + y[i]; 

                if(isJayaz(a,b,matrix.size(),matrix[0].size()) and dis[a][b] == -1){
                    q.push({a,b}); 
                    dis[a][b] = dis[currentRow][currentCol] + 1; 
                }
            }
        }
        return dis; 
    }
};
