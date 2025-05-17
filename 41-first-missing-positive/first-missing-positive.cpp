class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<n;i++){
            int &z=nums[i];
            if(z<1 || z>n) z=n+1;
        }
        // for(int i=0;i<n;i++) cout<<nums[i]<<" ";
        // cout<<endl;
        for(int i=0;i<n;i++){
            int temp=abs(nums[i]);
            if((temp-1<n) && nums[temp-1]>0) nums[temp-1]*=-1;
        }
        for(int i=0;i<n;i++) if(nums[i]>0) return i+1;
        return n+1;
    }
};