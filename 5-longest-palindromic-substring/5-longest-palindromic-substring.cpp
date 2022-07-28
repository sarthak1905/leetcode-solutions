class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.length();
        pair<int, int> res;
        vector<vector<int>> arr(n, vector<int> (n, 0));
        int max = 1;
        res = make_pair(0, 0);
        for(int i=0; i<n; ++i) arr[i][i] = 1;
        
        for(int j=1; j<n; ++j)
        {
            for(int i=0; i<j; ++i)
            {
                if(s[i] == s[j])
                {
                    if(j - i == 1)
                        arr[i][j] = 2;
                    
                    else if(arr[i+1][j-1] != 0)
                        arr[i][j] = arr[i+1][j-1] + 2;
                    
                    if(arr[i][j] > max)
                        {
                            res = make_pair(i, j);
                            max = arr[i][j];
                        }
                }
            }
        }
        
        //cout << "Start index: " << res.first << " End Index: " << res.second << " Max: " << max;
        
        return s.substr(res.first, res.second - res.first + 1);
    }
};