class Solution {
public:

    string encode(vector<string>& strs) {
        string ansString = "";
        for(int i=0; i<strs.size(); i++){
            ansString+=to_string(strs[i].size());
            ansString+="#";
            ansString+=strs[i];
        }
        return ansString;
    }

    vector<string> decode(string s) {
        string currentWord = "";
        int wordSize=0;
        vector<string> ans;
        int i=0;
        while(i<s.size()) {
            while(s[i] != '#'){
                wordSize = wordSize*10 + (int(s[i] - '0'));
                i++;
            }
            currentWord = s.substr(i+1,wordSize);
            ans.push_back(currentWord);
            i = i+wordSize+1;
            wordSize = 0;
            currentWord = "";
        }
        return ans;
    }
};
