class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int> res(nums.size());
        if (k > nums.size())
            k %= nums.size();
        int i, j;
        for(i = k, j = 0; i < res.size(); ++i, ++j)
            res[i] = nums[j];
        i = 0;
        while(j < nums.size()){
            res[i] = nums[j];
            i++;
            j++;
        }
        nums = res;
        return;
    }
};