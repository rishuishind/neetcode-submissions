class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> isPresent;
        for(int i=0; i<nums.size(); i++){
            if(isPresent.contains(nums[i])){
                return true;
            }else{
                isPresent.insert(nums[i]);
            }
        }
        return false;
    }
};