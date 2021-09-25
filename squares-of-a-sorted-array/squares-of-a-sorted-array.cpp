class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int low = 0, high = nums.size() - 1;
        vector<int> res(nums.size());
        for (int i = high ; i >= 0; i--) 
        {
            if (abs(nums[high]) > abs(nums[low])) 
                res[i] = nums[high] * nums[high--];
            else 
                res[i] = nums[low] * nums[low++];
        }
        return res;
    }
};