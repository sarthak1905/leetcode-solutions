class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int left = 0;
        int right = n - 1;
        int max_area = 0;
        while(left < right)
        {
            int area = min(height[left], height[right])*(right-left);
            
            if(area > max_area)
                max_area = area;
            
            if(min(height[left], height[right]) == height[left])
                left += 1;
            else
                right -= 1;
        }
        return max_area;
    }
};