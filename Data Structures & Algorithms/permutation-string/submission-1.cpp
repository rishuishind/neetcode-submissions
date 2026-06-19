class Solution {
public:
    bool checkInclusion(string s1, string s2) {

        if(s1.size()>s2.size()){
            return false;
        }

        vector<int> s1Count(26,0);
        vector<int> s2Count(26,0);
        for(int i=0; i<s1.size(); i++){
            s1Count[s1[i]-'a']++;
            s2Count[s2[i]-'a']++;
        }

        int matches = 0;
        for(int i=0; i<26; i++){
            if(s1Count[i]==s2Count[i]){
                matches++;
            }
        }
        if(matches==26){
            return true;
        }
        int l=0;
        for(int r=s1.size(); r<s2.size(); r++){
            int ch = s2[r]-'a';
            s2Count[ch]++;
            if(s1Count[ch]==s2Count[ch]){
                matches++;
            }else if(s1Count[ch]+1 == s2Count[ch]){
                matches--;
            }
           
            s2Count[s2[l]-'a']--;
            if(s1Count[s2[l]-'a']==s2Count[s2[l]-'a']){
                matches++;
            }else if(s1Count[s2[l]-'a']-1 ==s2Count[s2[l]-'a']){
                matches--;
            }
            l++;

             if(matches==26){
                return true;
            }
        }
        return false;
    }
};
