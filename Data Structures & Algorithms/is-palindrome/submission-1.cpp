class Solution {
public:
    bool isPalindrome(string s) {
        int start = 0;
        int end = s.size()-1;
        while(start < end){
            char stCh = s[start];
            char enCh = s[end];
            char left = tolower(stCh);
            char right = tolower(enCh);
            if((left >= 'a' && left <= 'z' || left >= '0' && left <= '9') && (right >='a' && right <= 'z' || right >= '0' && right <= '9')){
                if(left != right){
                    return false;
                }
                start++;
                end--;
            }
            if((left < 'a' || left > 'z') && (left < '0' || left > '9')){
                start++;
            }
            if((right < 'a' || right > 'z') && (right < '0' || right > '9')){
                end--;
            }
        }
        return true;
    }
};
