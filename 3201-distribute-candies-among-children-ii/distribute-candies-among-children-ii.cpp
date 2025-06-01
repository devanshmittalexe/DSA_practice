// hard question but done sucessfully
// https://www.youtube.com/watch?v=eL_3cDp0zjE&t=2502s
// took help from this video
class Solution {
public:
    long long distributeCandies(int n, int limit) {
        long long ans=0;
        int minch1=max(0,n-2*limit);
        int maxch1=min(limit,n);
        int minch2,maxch2,N;
        for(int i=minch1;i<=maxch1;i++){
            //for child 2;
            N=n-i;
            minch2=max(0,N-limit);
            maxch2=min(N,limit);
            ans+=maxch2-minch2+1;
        }
        return ans;
    }
};