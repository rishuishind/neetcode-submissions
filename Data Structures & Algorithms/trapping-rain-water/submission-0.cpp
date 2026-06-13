class Solution {
public:
    int trap(vector<int>& height) {
        vector<int> maxL;
        vector<int> maxR;
        int ans = 0;
        int lmax=INT_MIN;
        int rmax = INT_MIN;
        for(int i=0; i<height.size(); i++){
            if(height[i]>lmax){
                lmax = height[i];
            }
            maxL.push_back(lmax);
        }
        for(int i=height.size()-1; i>=0; i--){
            if(height[i]>rmax){
                rmax = height[i];
            }
            maxR.push_back(rmax);
        }
        reverse(maxR.begin(),maxR.end());
        for(int i=0; i<height.size(); i++){
            if(min(maxL[i],maxR[i]) - height[i] > 0){
                ans += min(maxL[i],maxR[i]) - height[i];
            }
        }
        return ans;
    }
};
