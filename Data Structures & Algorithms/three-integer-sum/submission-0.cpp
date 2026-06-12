class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        sort(nums.begin(),nums.end());
        int previ = -1;
        for(int i=0; i<nums.size()-2; i++){
            if(previ > -1 && nums[previ] == nums[i]){
                continue;
            }
            int j=i+1;
            int k=nums.size()-1;
            while(j<k){
                int sum = nums[i]+nums[j]+nums[k];
                if(sum == 0){
                    vector<int> temp = {nums[i],nums[j],nums[k]};
                    ans.push_back(temp);
                    int tempj = nums[j];
                    int tempk = nums[k];
                    j++;
                    k--;
                    while(tempj == nums[j] && j<k){
                        j++;
                    }
                    while(tempk == nums[k] && k>j){
                        k--;
                    }
                }else if(sum < 0){
                    j++;
                }else{
                    k--;
                }
            }
            previ = i;
        }
        return ans;
    }
};
