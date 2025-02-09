class Solution {
    public:
        vector<vector<int>> sortMatrix(vector<vector<int>>& grid) {
            int n = grid.size();
    
            for (int i = 0; i < n; i++) {
                priority_queue<int> maxHeap;
                int x = i, y = 0;
                while (x < n && y < n) {
                    maxHeap.push(grid[x][y]);
                    x++, y++;
                }
                x = i, y = 0;
                while (x < n && y < n) {
                    grid[x][y] = maxHeap.top();
                    maxHeap.pop();
                    x++, y++;
                }
            }
    
            for (int j = 1; j < n; j++) {
                priority_queue<int, vector<int>, greater<int>> minHeap;
                int x = 0, y = j;
                while (x < n && y < n) {
                    minHeap.push(grid[x][y]);
                    x++, y++;
                }
                x = 0, y = j;
                while (x < n && y < n) {
                    grid[x][y] = minHeap.top();
                    minHeap.pop();
                    x++, y++;
                }
            }
    
            return grid;
        }
    };©leetcode