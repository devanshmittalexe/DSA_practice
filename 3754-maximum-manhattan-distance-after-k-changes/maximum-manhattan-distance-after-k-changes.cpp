// optimal solution
class Solution {
public:
    int maxDistance(string S, int k) {
        int cs,ms=0,e=0,w=0,n=0,s=0;
        for(int i=0;i<S.length();i++){
            if(S[i]=='S') s++;
            else if(S[i]=='E') e++;
            else if(S[i]=='W') w++;
            else if(S[i]=='N') n++;
            cs=abs(s-n)+abs(e-w);
            cs+=min((i+1-cs),k*2);
            ms=max(ms,cs);
        }
        return ms;
    }
};