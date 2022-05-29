class Solution:
    def lengthOfLIS(self, nums: List[int]) -> int:
        arr = []
        res = 1
        for i in range(len(nums)):
            arr.append(1)
        for j in range(1, len(nums)):
            for i in range(j):
                if nums[j] > nums[i]:
                    arr[j] = max(arr[j], arr[i] + 1)
                    res = max(res, arr[j])
        
        return res