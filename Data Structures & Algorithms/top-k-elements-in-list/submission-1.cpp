class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> freq;
        vector<int> arr;
        for(int i=0; i<nums.size(); i++){
            freq[nums[i]]++;
        }
        while(k>0){
            int count=0;
            int ans=0;
            for(auto&[key,value] : freq){
                if(value>count){
                    count = value;
                    ans=key;
                }
            }
            arr.push_back(ans);
            freq.erase(ans);
            k--;
        }
        return arr;
    }
};
