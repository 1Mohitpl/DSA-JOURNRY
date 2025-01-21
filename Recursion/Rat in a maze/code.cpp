#include <iostream>
#include <string>
#include <vector>

using namespace std;

void helper(vector<vector<int>> &maze, int row, int col, string path, vector<string> &ans) {
    int n = maze.size();
    // Base case: Out of bounds, blocked cell, or already visited
    if (row < 0 || col < 0 || row >= n || col >= n || maze[row][col] == 0 || maze[row][col] == -1) {
        return;
    }

    // Base case: Reached destination
    if (row == n - 1 && col == n - 1) {
        ans.push_back(path);
        return;
    }

    // Mark the current cell as visited
    maze[row][col] = -1;

    // Move Down
    helper(maze, row + 1, col, path + "D", ans);
    // Move Up
    helper(maze, row - 1, col, path + "U", ans);
    // Move Left
    helper(maze, row, col - 1, path + "L", ans);
    // Move Right
    helper(maze, row, col + 1, path + "R", ans);

    // Backtrack: Unmark the current cell
    maze[row][col] = 1;
}

vector<string> findpath(vector<vector<int>> &maze) {
    vector<string> ans;
    int n = maze.size();
    if (n == 0 || maze[0][0] == 0 || maze[n - 1][n - 1] == 0) {
        return ans; // No paths possible if starting or ending point is blocked
    }

    helper(maze, 0, 0, "", ans);
    return ans;
}

int main() {
    vector<vector<int>> maze = {
        {1, 0, 0, 0}, 
        {1, 1, 0, 1}, 
        {1, 1, 0, 0}, 
        {0, 1, 1, 1}
    };

    vector<string> ans = findpath(maze);
    for (auto path : ans) {
        cout << path << endl;
    }
    return 0;
}
