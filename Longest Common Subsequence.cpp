class Solution{
    public:
int help(string& s1, string& s2, int ind1, int ind2,  vector<vector<int>>& dp){
    if(ind1<0 || ind2<0)
        return 0;
    if(dp[ind1][ind2]!=-1)
        return dp[ind1][ind2];
    if(s1[ind1] == s2[ind2])
        return dp[ind1][ind2] = 1 + help(s1,s2,ind1-1,ind2-1,dp);
    else{
        int a=help(s1,s2,ind1,ind2-1,dp);
        int b=help(s1,s2,ind1-1,ind2,dp);
        
        return dp[ind1][ind2] = 0 + max(a,b);
    }
   
}
  int lcs(int n, int m, string s1, string s2) {

    vector<vector<int>> dp(n,vector<int>(m,-1));
    return help(s1,s2,n-1,m-1,dp);
}
};
