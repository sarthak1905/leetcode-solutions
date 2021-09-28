class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        unordered_map<int, int> m;
        vector<int> res(2);
        int search;
        for(int i = 0; i < numbers.size(); ++i)
        {
            search = target - numbers[i];
            if(m.find(search) == m.end())
                m[numbers[i]] = i + 1;
            else
            {
                res[0] = m[search];
                res[1] = i + 1;
                return res;
            }
        }
        return res;
    }
};