// easy question
// optimized also
class Solution {
public:
    int findGCD(vector<int>& nums) {
        int s=INT_MAX;
        int b=INT_MIN;
        for(auto &i:nums){
            if(i<s) s=i;
            if(i>b) b=i;
        }
        for(int i=s;i>1;i--) if(s%i==0 && b%i==0) return i;
        return 1;
    }
};