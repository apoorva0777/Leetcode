class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxarea = 0;
        int left = 0;
        int right = height.size() - 1;
        while (left < right) {
            int currboxheight = min(height[left], height[right]);
            int currwidth = right - left; 
            int area = currboxheight * currwidth;
            if (area > maxarea) {
                maxarea = area;
            }
            if (height[left] < height[right]) {
                left++;
            } else {
                right--;
            }
        }

        return maxarea;
    }
};
