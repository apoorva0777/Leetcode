class Solution {
public:
    int n;
    vector<vector<int>> directions = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};
    int dfs(vector<vector<int>>& grid, int i, int j, int islandId) {
        if (i < 0 || i >= n || j < 0 || j >= n || grid[i][j] != 1) 
            return 0;
        
        grid[i][j] = islandId; 
        int size = 1;
        for (auto& dir : directions) {
            size += dfs(grid, i + dir[0], j + dir[1], islandId);
        }
        return size;
    }

    int largestIsland(vector<vector<int>>& grid) {
        n = grid.size();
        unordered_map<int, int> islandSize;  
        int islandId = 2;  
        int maxIsland = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (grid[i][j] == 1) {
                    int size = dfs(grid, i, j, islandId);
                    islandSize[islandId] = size;
                    maxIsland = max(maxIsland, size);
                    islandId++;
                }
            }
        }
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (grid[i][j] == 0) {
                    unordered_set<int> uniqueIslands;
                    int newSize = 1; 

                    for (auto& dir : directions) {
                        int ni = i + dir[0], nj = j + dir[1];
                        if (ni >= 0 && ni < n && nj >= 0 && nj < n && grid[ni][nj] > 1) {
                            uniqueIslands.insert(grid[ni][nj]);
                        }
                    }
                    for (int id : uniqueIslands) {
                        newSize += islandSize[id];
                    }

                    maxIsland = max(maxIsland, newSize);
                }
            }
        }

        return maxIsland;
    }
};