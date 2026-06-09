class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> ans;
        int product = 1;
        int zeroCount =0;
        bool isZero = false;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]!=0){
                product*=nums[i];
            }else{
                isZero = true;
                zeroCount++;
            }
        }
        if(zeroCount>1){
            product = 0;
        }
        for(int i=0; i<nums.size(); i++){
            if(!isZero){
                ans.push_back(product/nums[i]);
            }else{
                if(isZero && nums[i]==0){
                    ans.push_back(product);
                }else{
                    ans.push_back(0);
                }
            }
        }
        return ans;
    }
};
