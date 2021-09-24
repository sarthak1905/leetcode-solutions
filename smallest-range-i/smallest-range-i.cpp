class Solution {
public:
    int smallestRangeI(vector<int>& nums, int k) {
        long long max_e = -9999999999, min_e = 99999999;
        for(int i = 0; i < nums.size(); ++i)
        {
            if(nums[i] > max_e)
                max_e = nums[i];
            if(nums[i] < min_e)
                min_e = nums[i];
        }
        int diff = max_e - min_e;
        if(diff <= 2*k)
            return 0;
        return diff - 2*k;
    }
};