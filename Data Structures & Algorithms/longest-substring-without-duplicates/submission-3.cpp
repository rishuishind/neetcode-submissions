class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.size() <=1){
            return s.size() == 1 ? 1:0;
        }
        int i=0;
        int ans = 0;
        int count =0;
        unordered_map<char,int> st;
        while(i<s.size()){
            if(st.find(s[i]) == st.end()){
                count++;
                ans = max(ans,count);
                st.insert({s[i],i});
                i++;
            }else{
                int idx = st.at(s[i]);
                i = idx+1;
                count = 0;
                st.clear();
            }
        }
        return ans;
    }
};
