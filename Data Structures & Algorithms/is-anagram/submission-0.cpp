class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()){
            return false;
        }
        vector<int> nums(26,0);
        for(int i=0; i<s.size(); i++){
            char ch = s[i];
            nums[ch-'a']++;
        }

        for(int i=0; i<t.size(); i++){
            char ch = t[i];
            if(nums[ch-'a']==0){
                return false;
            }else{
                nums[ch-'a']--;
            }
        }

        for(int i=0; i<nums.size(); i++){
            if(nums[i] != 0){
                return false;
            }
        }
        return true;
    }
};
