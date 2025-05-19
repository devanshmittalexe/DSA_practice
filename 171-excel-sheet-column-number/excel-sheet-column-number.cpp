class Solution {
public:
    int titleToNumber(string c) {
        reverse(c.begin(),c.end());
        int ans=0;
        long long thr=1;
        for(int i=0;i<c.length();i++){
            int temp=c[i]-'A';
            ans+=thr*(temp+1);
            thr*=26;
        }
        return ans;
    }
};