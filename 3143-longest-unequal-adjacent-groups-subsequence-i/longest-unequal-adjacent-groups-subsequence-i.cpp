class Solution {
public:
    vector<string> getLongestSubsequence(vector<string>& words, vector<int>& groups) {
        vector<string>ans;
        int t=groups[0];
        for(int i=0;i<words.size();i++){
            if(groups[i]==t){
                t=!groups[i];
                ans.push_back(words[i]);
            }
        }
        return ans;
    }
};