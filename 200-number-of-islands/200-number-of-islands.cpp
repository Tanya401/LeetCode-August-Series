class Solution {
public:
   void dfs(int i, int j,vector<vector<char>>&grid, int n, int m,vector<vector<int>>&vis){
       if(i<0 || j<0 || i>=n || j>=m || grid[i][j] == '0') return;
       if(vis[i][j]!=0)
           vis[i][j] = 1;
      grid[i][j] = '0';
           dfs(i+1,j,grid,n,m,vis);
            dfs(i-1,j,grid,n,m,vis);
            dfs(i,j+1,grid,n,m,vis);
            dfs(i,j-1,grid,n,m,vis);
      }
    int numIslands(vector<vector<char>>& grid) {
      int n  = grid.size();
        int m = grid[0].size();
        vector<vector<int>> vis(n,vector<int>(m,0));
        int ans = 0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]=='1' && vis[i][j] == 0){
                    ans++;
                    dfs(i,j,grid,n,m,vis);
                }
            }
        }
        return ans;
    }
};