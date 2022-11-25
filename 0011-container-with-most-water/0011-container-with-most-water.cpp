class Solution {
public:
    int maxArea(vector<int>& height) {
        int i=0,j=height.size()-1;
        int area=0,maxWater=0;
        while(i<j){
            int minheight=min(height[i],height[j]);
            area=minheight*(j-i);
            maxWater=max(area,maxWater);
            if(height[i]<=height[j])i++;
            else j--;
        }
        return maxWater;
    }
};