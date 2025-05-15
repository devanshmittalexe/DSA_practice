class Solution {
public:
    vector<string> getLongestSubsequence(vector<string>& words, vector<int>& groups) {
        vector<string>ans;
        int t=groups[0],n=words.size();
        for(int i=0;i<n;i++){
            if(groups[i]==t){
                t=!groups[i];
                ans.push_back(words[i]);
            }
        }
        return ans;
    }
};