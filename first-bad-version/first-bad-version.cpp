// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        if(n == 1)
            return 1;
        
        long long l = 1, r = n;
        while(l <= r){
            long long m = (l+r)/2;
            
            if(l == r)
                return l;
            
            if(r == l+1){
                if(isBadVersion(l))
                    return l;
                else
                    return r;
            }
            
            if(isBadVersion(m))
                r = m;
            else
                l = m;
        }
        return -1;
    }
};