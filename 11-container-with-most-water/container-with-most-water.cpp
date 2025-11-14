class Solution {
public:
    int maxArea(vector<int>& height) {
        int l=0;
        int size=height.size();
        int r=size-1;
        int maxwater=0;
        int water;
        for(int i=0;i<height.size();i++){
            water=min(height[l],height[r])*(r-l);
            if(height[l]<height[r]){
                l++;
            }
            else{
                r--;
            }
            maxwater=max(water,maxwater);
        }
        
    return maxwater;
    }
};