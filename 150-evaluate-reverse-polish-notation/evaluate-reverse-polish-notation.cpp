class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<string>s;
        int a,b;
        for(auto &i:tokens){
            if(i=="+" ||i=="/" ||i=="*" ||i=="-"){
                a=stoi(s.top());
                s.pop();
                b=stoi(s.top());
                s.pop();
                if(i=="+") a=a+b;
                else if(i=="-") a=b-a;
                else if(i=="*") a=a*b;
                else a=b/a;
                s.push(to_string(a));
            }
            else s.push(i);
        }
        return stoi(s.top());
    }
};