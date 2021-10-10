class Solution {
public:
    void findAdjacent(vector<vector<char>> &grid, int rows, int colms, int x, int y)
    {
        if(x < 0 || y < 0 || x >= rows || y >= colms || grid[x][y] != '1')
        {
            return;
        }
        grid[x][y] = '2';
        
        findAdjacent(grid, rows, colms, x+1, y);
        findAdjacent(grid, rows, colms, x, y+1);
        findAdjacent(grid, rows, colms, x-1, y);
        findAdjacent(grid, rows, colms, x, y-1);
    }
    
    int numIslands(vector<vector<char>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        if(!m) return 0;
        int result = 0;
        for(int i=0; i<m; i++)
        {
            for(int j=0; j<n; j++)
            {
                if(grid[i][j] == '1')
                {
                    findAdjacent(grid, m, n, i, j);
                    result++;
                }
            }
        }
        return result;
    }
};