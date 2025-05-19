class Solution {
public:
    bool checkPerfectNumber(int num) {
        int s=0;
        int temp=num/2;
        for(int i=1;i<=temp;i++){
            if(num%i==0) s+=i;
        }
        return s==num;
    }
};