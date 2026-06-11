class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int lastSmaller = INT_MIN;
        int count = 0;
        int largestCount = 0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]-1 == lastSmaller){
                count++;
                lastSmaller = nums[i];
            }else if(nums[i] != lastSmaller){
                count =1;
                lastSmaller = nums[i];
            }
            largestCount = max(largestCount,count);
        }
        return largestCount;
    }
};
