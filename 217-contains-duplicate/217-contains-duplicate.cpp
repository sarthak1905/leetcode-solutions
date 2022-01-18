class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int, int> mp;
        for(int i = 0; i < nums.size(); ++i){
            if(mp.find(nums[i]) == mp.end())
                mp.insert(make_pair(nums[i], 1));
            else
                return true;
        }
        return false;
    }
};