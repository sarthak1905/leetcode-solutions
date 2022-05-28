#User function Template for python3


class Solution:
    def MissingNumber(self,array,n):
        # code here
        exp_s = (n*(n + 1))/2
        s = 0
        for e in array:
            s += e
        return int(exp_s - s)
        

#{ 
#  Driver Code Starts
#Initial Template for Python 3




t=int(input())
for _ in range(0,t):
    n=int(input())
    a=list(map(int,input().split()))
    s=Solution().MissingNumber(a,n)
    print(s)
# } Driver Code Ends