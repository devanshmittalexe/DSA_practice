class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int temp=nums[0];
        int ans=-1;
        for(int i=1;i<nums.size();i++){
            cout<<nums[i]<<" "<<temp;
            if(nums[i]>temp) ans=max(ans,(nums[i]-temp));
            if(nums[i]<temp) temp=nums[i];
        }
        return ans;
    }
};