// brute force solution
class Solution {
public:
    int partitionArray(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int ans=0;
        int t=0;
        for(int i=0;i<nums.size();i++){
            if((nums[i]-nums[t])>k){
                ans+=1;
                t=i;
            }
        }
        return ans+1;
    }
};