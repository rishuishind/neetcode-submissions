class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0){
            return 0;
        }
        unordered_set<int> mp;
        int count =0;
        int longest = 1;
        for(int i=0; i<nums.size(); i++){
            mp.insert(nums[i]);
        }
        for(auto it : mp){
            if(mp.find(it-1)==mp.end()){
                count=1;
                int x = it;
                while(mp.find(x+1)!=mp.end()){
                    x++;
                    count++;
                }
            }
            longest = max(longest,count);
            count =0;
        }
        return longest;
    }
};
