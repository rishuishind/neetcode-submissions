class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        if(strs.size()==0){
            ans.push_back({""});
            return ans;
        } else if(strs.size()==1){
            ans.push_back(strs);
            return ans;
        }
        unordered_map<string,vector<string>> store;
        for(int i=0; i<strs.size(); i++){
            string s = strs[i];
            sort(s.begin(),s.end());
            store[s].push_back(strs[i]);
        }
        for(auto&[key,group] : store){
            ans.push_back(group);
        }
        return ans;
    }
};
