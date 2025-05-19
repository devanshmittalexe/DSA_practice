class Solution {
public:
    bool checkPerfectNumber(int num) {
        if(num==1) return 0;
        int s=1;
        for(int i=2;i*i<=num;i++){
            if(num%i==0){
                s+=i;
                cout<<i;
                s+=num/i;
                cout<<num/i<<endl;
            }
        }
        cout<<s<<endl;
        return s==num;
    }
};