class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int> res(nums.size());
        int i, j;
        if (k > nums.size())
            k %= nums.size();
        for(i = 0, j = nums.size() - k; j < nums.size(); ++i, ++j)
            res[i] = nums[j];
        j = 0;
        while(i < res.size())
        {
            res[i] = nums[j];
            i++;
            j++;
        }
        nums = res;
        return;
    }
};