class Solution {
public:
    int longestPalindrome(vector<string>& words) {
        unordered_map<string,int>mp;
        string g;
        int ans=0;
        for(auto &i:words){
            g=i;
            swap(g[0],g[1]);
            if(mp.count(g) && mp[g]>0){
                mp[g]--;
                ans+=4;
            }
            else mp[i]++;
        }
        for(auto &[i,j]:mp){
            if(i[0]==i[1] && j>0) return ans+2;
        }
        return ans;
    }
};
// class Solution {
// public:
//     int longestPalindrome(vector<string>& words) {
//         unordered_set<string>s;
//         unordered_map<string,int>m;
//         int ma=0;
//         int ans=0;
//         for(auto &i:words){
//             string g=i;
//             swap(g[0],g[1]);
//             if(s.count(g)){
//                 ans+=4;
//                 s.erase(g);
//             }
//             // if(g[0]==g[1]){
//             //     m[g]++;
//             //     if(m[g]>ma) ma=m[g];
//             // }
//             else s.insert(i);
//         }
//         for(auto &i:s){
//             if(i[0]==i[1]) return ans+2;
//         }
//         return ans;
//     }
// };

