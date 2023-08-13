class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.length();
        string rs = "";
        for (int i = n - 1; i >= 0; i--) {
            rs.push_back(s[i]);
        }
        
        int dp[n + 1][n + 1];
        int maxLen = 0;
        int endIdx = 0;
             
         for (int i = 0; i <= n; i++) {
            for (int j = 0; j <= n; j++) {
                if (i == 0 || j == 0) {
                    dp[i][j] = 0;
                } else if (s[i - 1] == rs[j - 1]) {
                    dp[i][j] = 1 + dp[i - 1][j - 1];
                    if (dp[i][j] > maxLen) {
                        int revIdx = n - j;
                        if (revIdx + dp[i][j] - 1 == i - 1) {
                            maxLen = dp[i][j];
                            endIdx = i - 1;
                        }
                    }
                } else {
                    dp[i][j] = 0;
                }
            }
        }
    string ans = "";
        while (maxLen > 0) {
            ans = s[endIdx] + ans;
            endIdx--;
            maxLen--;
        }
        
        return ans;
    }
};