class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> preFixProduct;
        vector<int> postFixProduct;
        vector<int> ans;
        int preProduct = 1;
        int postProduct = 1;
        preFixProduct.push_back(1);
        for(int i=1; i<nums.size(); i++){
            preProduct*=nums[i-1];
            preFixProduct.push_back(preProduct);
        }
        postFixProduct.push_back(1);
        for(int i=nums.size()-2; i>=0; i--){
            postProduct*=nums[i+1];
            postFixProduct.push_back(postProduct);
        }
        reverse(postFixProduct.begin(),postFixProduct.end());
        for(int i=0; i<nums.size(); i++){
            ans.push_back(preFixProduct[i] * postFixProduct[i]);
        }
        return ans;
    }
};
