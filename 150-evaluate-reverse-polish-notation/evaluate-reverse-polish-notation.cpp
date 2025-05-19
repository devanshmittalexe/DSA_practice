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
                if(i=="+") s.push(a+b);
                else if(i=="-") s.push(b-a);
                else if(i=="*") s.push(a*b);
                else s.push(b/a);
            }
            else s.push(stoi(i));
        }
        return s.top();
    }
};