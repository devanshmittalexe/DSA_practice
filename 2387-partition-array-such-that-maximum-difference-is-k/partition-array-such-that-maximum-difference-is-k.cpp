// optimal solution
class Solution {
public:
    int partitionArray(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int ans=0,t=0,n=nums.size();
        for(int i=0;i<n;i++){
            if((nums[i]-nums[t])>k){
                ans+=1;
                t=i;
            }
        }
        return ans+1;
    }
};