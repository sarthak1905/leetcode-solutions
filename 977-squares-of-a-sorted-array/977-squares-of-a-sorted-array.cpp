class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int low = 0, high = nums.size() - 1;
        vector<int> res(high + 1);
        int n = high;
        while(low <= high)
        {
            if(abs(nums[low]) > abs(nums[high])){
                res[n] = nums[low] * nums[low];
                low++;
            }
            else{
               res[n] = nums[high]* nums[high];
                high--;
            }
            n--;
        }
        return res;
    }
};