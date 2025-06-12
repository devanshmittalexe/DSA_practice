class Solution {
public:
    int maxAdjacentDistance(vector<int>& nums) {
        int m=INT_MIN;
        // int temp;
        for(int i=0;i<nums.size();i++){
            // temp=abs(nums[i]-nums[(i+1)%nums.size()]);
            // if(temp>m) m=temp;
            m=abs(nums[i]-nums[(i+1)%nums.size()])>m?abs(nums[i]-nums[(i+1)%nums.size()]):m;
        }
        return m;
    }
};