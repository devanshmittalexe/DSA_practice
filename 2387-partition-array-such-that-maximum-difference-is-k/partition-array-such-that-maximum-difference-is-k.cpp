// optimal solution
class Solution {
public:
    int partitionArray(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int ans=0,t=nums[0],n=nums.size();
        for(int i=0;i<n;i++){
            if((nums[i]-t)>k){
                ans+=1;
                t=nums[i];
            }
        }
        return ans+1;
    }
};