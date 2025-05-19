class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int>s;
        int a,b;
        for(auto &i:tokens){
            if(i=="+" ||i=="/" ||i=="*" ||i=="-"){
                a=s.top();
                s.pop();
                b=s.top();
                s.pop();
                if(i=="+") a=a+b;
                else if(i=="-") a=b-a;
                else if(i=="*") a=a*b;
                else a=b/a;
                s.push(a);
            }
            else s.push(stoi(i));
        }
        return s.top();
    }
};