class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int i=0;
        int j=i+1;
        int ans = 0;
        while(i<prices.size()-1 && j<prices.size()){
            int maxi = 0;
            if(prices[j]-prices[i]<=0){
                i++;
                j=i+1;
            }else if (prices[j]-prices[i]>0){
                maxi = prices[j]-prices[i];
                ans = max(ans,maxi);
                j++;
            }
        }
        return ans;
    }
};
