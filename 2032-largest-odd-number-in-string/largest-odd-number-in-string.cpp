class Solution {
public:
    string largestOddNumber(string num) {
        string ans="";
        string temp;
        int x;
        for(auto &i:num){
            x=i-'0';
            temp+=i;
            if(x&1){
                ans=temp;
            }
        }
        return ans;
    }
};