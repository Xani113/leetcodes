class Solution {
public:
    int maxArea(vector<int>& height) {
        int l=0,r=height.size()-1;
        int mw=0;
        while (l<r){
            int h=min(height[l],height[r]);
            int w=r-l;
            mw=max(mw,w*h);
            if(height[l]<height[r]) l++;
            else r--;
        }
        return mw;
    }
};