class Solution {
public:
    string largestOddNumber(string num) {
        int n=num.length();
        while(n>0){
            if((num[n-1]-'0')&1){
                return num.substr(0,n);
            }
            n--;
        }
        return "";
        // string temp;
        // int x;
        // for(auto &i:num){
        //     x=i-'0';
        //     temp+=i;
        //     if(x&1){
        //         ans=temp;
        //     }
        // }
        // return ans;
    }
};