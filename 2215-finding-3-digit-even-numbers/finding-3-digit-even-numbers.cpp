class Solution {
public:
    vector<int> findEvenNumbers(vector<int>& digits) {
        unordered_map<int,int>a;
        unordered_map<int,int>b;
        vector<int>ans;
        for(auto &i:digits) a[i]++;
        for(int i=100;i<=998;i+=2){
            int t=i;
            b.clear();
            while(t>0){
                b[t%10]++;
                t/=10;
            }
            for(auto &[x,y]:b){
                if(y>a[x]) t=1;
            }
            if(t==0) ans.push_back(i);
        }
        return ans;
    }
};