class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int>s;
        int a,b;
        for(const auto &i:tokens){
            if(i=="+" ||i=="/" ||i=="*" ||i=="-"){
                a=s.top();
                s.pop();
                b=s.top();
                s.pop();
                switch(i[0]){
                    case '+': s.push(a+b); break;
                    case '-': s.push(b-a); break;
                    case '*': s.push(a*b); break;
                    case '/': s.push(b/a); break;
                }
            }
            else s.push(stoi(i));
        }
        return s.top();
    }
};