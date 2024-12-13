class Solution {
public:
    void dfs(vector<vector<int>>& image, int sr, int sc, int color, int col, int row, int initialColor) {
       
        if (sr < 0 || sr >= row || sc < 0 || sc >= col || image[sr][sc] != initialColor || image[sr][sc] == color)
            return;

        // Update the color of the current pixel
        image[sr][sc] = color;

        // Recursively call dfs for the 4-connected neighbors
        dfs(image, sr + 1, sc, color, col, row, initialColor); // Down
        dfs(image, sr - 1, sc, color, col, row, initialColor); // Up
        dfs(image, sr, sc + 1, color, col, row, initialColor); // Right
        dfs(image, sr, sc - 1, color, col, row, initialColor); // Left
    }

    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int row = image.size();
        int col = image[0].size();
        int initialColor = image[sr][sc];

        // If the starting pixel is already the target color, no changes are needed
        if (initialColor != color) {
            dfs(image, sr, sc, color, col, row, initialColor);
        }

        return image;
    }
};
