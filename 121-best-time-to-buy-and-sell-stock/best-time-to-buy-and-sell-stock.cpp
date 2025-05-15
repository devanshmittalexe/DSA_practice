// best solution
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size(),m=prices[0],ans=0,temp;
        for(int i=1;i<n;i++){
            temp=prices[i];
            ans=max(ans,temp-m);
            m=min(temp,m);
        }
        return ans;
    }
};