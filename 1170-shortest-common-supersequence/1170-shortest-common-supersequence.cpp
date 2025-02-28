class Solution {
public:
string Lcsstring(string &a, string &b) {
    int m = a.size();
    int n = b.size();
    vector<vector<int>> dp(m + 1, vector<int>(n + 1, 0));
    
    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) {
            if (a[i - 1] == b[j - 1])
                dp[i][j] = dp[i - 1][j - 1] + 1;
            else
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
        }
    }
    
    int i = m, j = n;
    string lcsStr = "";
    while (i > 0 && j > 0) {
        if (a[i - 1] == b[j - 1]) {
            lcsStr = a[i - 1] + lcsStr;
            i--, j--;
        } else if (dp[i - 1][j] > dp[i][j - 1]) {
            i--;
        } else {
            j--;
        }
    }
    
    return lcsStr;
}
                            


    
    



/// best part of this question is to find longest common substring;
    string shortestCommonSupersequence(string str1, string str2) {
        string lcs = Lcsstring(str1, str2);
        string ans = "";
        int p1 = 0, p2 = 0, p3 = 0;

        while (p3 < lcs.size()) {
            while (p1 < str1.size() && str1[p1] != lcs[p3]) {
                ans += str1[p1++];
            }
            while (p2 < str2.size() && str2[p2] != lcs[p3]) {
                ans += str2[p2++];
            }
            ans += lcs[p3++];
            p1++, p2++;
        }

        
        while (p1 < str1.size()) ans += str1[p1++];
        while (p2 < str2.size()) ans += str2[p2++];

        return ans;

        
        
    }
};