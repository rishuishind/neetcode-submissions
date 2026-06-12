class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> ans;
        int st = 0;
        int en = numbers.size()-1;
        while(st < en){
            int sum = numbers[st] + numbers[en];
            if(sum == target){
                ans.push_back(st+1);
                ans.push_back(en+1);
                return ans;
            }
            else if(sum > target){
                en--;
            }else{
                st++;
            }
        }
    }
};
