class Solution
{
    public:
    //Function to find the nth catalan number.
    int findCatalan(int n) 
    {
        const int mod = 1e9 + 7;
        
        vector<long long> dp(n + 1, 0);
        dp[0] = 1;
        
        for(int i = 1; i < n + 1; i++){
            for(int j = 0; j < i; j++){
                dp[i] = (dp[i] + (dp[j] * dp[i - j - 1]) % mod) % mod; 
            }
        }
        
        return dp[n];
    }
};
