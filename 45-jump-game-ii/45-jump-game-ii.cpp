class Solution {
public:
    int jump(vector<int>& nums) {
        int n = nums.size();
        int max_reachable;
        if(n == 1)
            return 0;
        
        vector<int> dp(n+1, n);
        dp[0] = 0;
        for(int i=0; i<n; ++i)
        {
            max_reachable = i + nums[i];
            for(int j=i+1; j<=min(max_reachable, n-1); ++j)
                dp[j] = min(dp[j], dp[i] + 1);
        }
        return dp[n-1];
    }
};