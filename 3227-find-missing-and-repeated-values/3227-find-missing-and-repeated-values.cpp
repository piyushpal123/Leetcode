class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
  
    int n = grid.size();
    long long N = n * n; 

    long long S = (N * (N + 1)) / 2;
    long long S2 = (N * (N + 1) * (2 * N + 1)) / 6;

    long long sum_actual = 0, sum_sq_actual = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            sum_actual += grid[i][j];
            sum_sq_actual += (long long)grid[i][j] * grid[i][j];
        }
    }

    long long diff = sum_actual - S;
    long long sum_diff = sum_sq_actual - S2;

    long long sum = sum_diff / diff;

    int a = (sum + diff) / 2;
    int b = (sum - diff) / 2;

    return {a, b};
}

        
    
};