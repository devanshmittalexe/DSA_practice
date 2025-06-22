class Solution {
public:
    vector<string> divideString(string s, int k, char fill) {
        vector<string>ans;
        string temp="";
        for(int i=0;i<s.size();i++){
            temp+=s[i];
            if((i+1)%k==0){
                ans.push_back(temp);
                temp="";
            }
        }
        if(!temp.empty()){
            int n=temp.size();
            for(int i=0;i<k-n;i++){
                temp+=fill;
            }
            ans.push_back(temp);
        }
        return ans;   
    }
};