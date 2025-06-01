// hard question but done sucessfully
class Solution {
public:
    long long distributeCandies(int n, int limit) {
        long long ans=0;
        int minch1=max(0,n-2*limit);
        int maxch1=min(limit,n);
        for(int i=minch1;i<=maxch1;i++){
            //for child 2;
            int N=n-i;
            int minch2=max(0,N-limit);
            int maxch2=min(N,limit);
            ans+=maxch2-minch2+1;
        }
        return ans;

    }
};