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
//             if(g[0]==g[1]){
//                 m[g]++;
//                 if(m[g]>ma) ma=m[g];
//             }
//             if(s.count(g)){
//                 ans+=4;
//                 s.erase(g);
//             }
//             else s.insert(i);
//         }
//         return ans+(ma*2);
//     }
// };
class Solution {
 public:
  int longestPalindrome(vector<string>& words) {
    int ans = 0;
    vector<vector<int>> count(26, vector<int>(26));

    for (const string& word : words) {
      const int i = word[0] - 'a';
      const int j = word[1] - 'a';
      if (count[j][i]) {
        ans += 4;
        --count[j][i];
      } else {
        ++count[i][j];
      }
    }

    for (int i = 0; i < 26; ++i)
      if (count[i][i])
        return ans + 2;

    return ans;
  }
};


