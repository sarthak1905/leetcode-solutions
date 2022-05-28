#User function Template for python3

#Function to find a continuous sub-array which adds up to a given number.
class Solution:
    def subArraySum(self,arr, n, s): 
       #Write your code here
        i = 0
        j = 1
        res = []
        curr_sum = arr[0]
       
        if curr_sum == s:
            res.append(1)
            res.append(1)
            return res
       
        while j <= n:
            while curr_sum > s and i < j - 1:
                curr_sum -= arr[i]
                i += 1
    
            if curr_sum == s:
                res.append(i + 1)
                res.append(j)
                return res
            
            if j < n:
                curr_sum += arr[j]
            j += 1
        
        res.append(-1)
        return res
        
#{ 
#  Driver Code Starts
#Initial Template for Python 3

import math

def main():
        T=int(input())
        while(T>0):
            
            NS=input().strip().split()
            N=int(NS[0])
            S=int(NS[1])
            
            A=list(map(int,input().split()))
            ob=Solution()
            ans=ob.subArraySum(A, N, S)
            
            for i in ans:
                print(i, end=" ")
                
            print()
            
            T-=1


if __name__ == "__main__":
    main()
# } Driver Code Ends