class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n = nums.size();
        if(n == 1)
            return true;
        
        int max_reachable = 0;
        for(int i=0; i<n; ++i)
            if(i <= max_reachable)
                max_reachable = max(i + nums[i], max_reachable);
        
        if(max_reachable >= n - 1)
            return true;
        return false;
    }
};