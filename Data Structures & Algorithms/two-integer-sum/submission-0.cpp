class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> keyStore;
        vector<int> ans(2,-1);
        for(int i=0; i<nums.size(); i++){
            int secPair = target - nums[i];
            if(keyStore.contains(secPair)){
                int ind = keyStore[secPair];
                ans[0] = ind;
                ans[1] = i;
                break;
            }
            keyStore[nums[i]] = i;
        }
        return ans;
    }
};
