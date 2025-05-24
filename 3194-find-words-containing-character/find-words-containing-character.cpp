class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int>ans;
        int n=words.size();
        string temp;
        for(int i=0;i<n;i++){
            temp=words[i];
            for(char &j:temp){
                if(j==x){
                    ans.push_back(i);
                    break;
                }
            }
        }
        return ans;
    }
};