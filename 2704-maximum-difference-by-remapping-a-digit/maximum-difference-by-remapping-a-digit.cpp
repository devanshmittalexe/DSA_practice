// optimal solution
class Solution {
public:
    int minMaxDifference(int num) {
        string s=to_string(num);
        char x,y;
        for(auto &i:s){
            if(i!='9'){
                x=i;
                break;
            } 
        }
        for(auto &i:s){
            if(i!='0'){
                y=i;
                break;
            }
        }
        string s1="",s2="";
        for(auto &i:s){
            if(i==x) s1+='9';
            else s1+=i;
            if(i==y) s2+='0';
            else s2+=i;
        }
        return abs(stoi(s1)-stoi(s2));
    }
};