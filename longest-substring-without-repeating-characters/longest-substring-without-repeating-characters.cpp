class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> mp;
        int i = 0, j = 0, res = 0;
        while(j < s.length())
        {
            if(mp.find(s[j]) == mp.end())
            {
                res = max(res, j - i + 1);
                mp[s[j]]++;
                j++;
                continue;
            }

            mp.erase(s[i]);
            i++;
        }
        return res;
    }
};