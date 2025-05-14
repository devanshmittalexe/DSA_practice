class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int s=((n)*(n+1))/2;
        int s2=accumulate(nums.begin(),nums.end(),0);
        return s-s2;
    }
};