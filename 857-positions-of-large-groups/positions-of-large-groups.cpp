class Solution {
public:
    vector<vector<int>> largeGroupPositions(string s) {
        vector<vector<int>>ans;
        int S=0,n=s.length();
        for(int i=1;i<n;i++){
            if(!(s[i]==s[i-1])){
                if(i-S>=3) ans.push_back({S,i-1});
                S=i;
            }
        }
        if(S<n-2) ans.push_back({S,n-1});
        return ans;
    }
};