class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int s=0;
        int e=nums.size()-1;
        int mid;
        int ans=-1;
        while(s<=e){
            mid=(s+e)/2;
            if(nums[mid]<=target){
                ans=mid;
                s=mid+1;
            }
            else e=mid-1;
        }
        if((ans>-1 && nums[ans]!=target)||ans==-1) return vector<int>{-1,-1};
        s=0;
        e=nums.size()-1;
        int ans2=-1;
        while(s<=e){
            mid=(s+e)/2;
            if(nums[mid]>=target){
                ans2=mid;
                e=mid-1;
            }
            else s=mid+1;
        }
        if((ans2>-1 && nums[ans]!=target)|| ans2==-1) return vector<int>{-1,-1};
        return vector<int>{ans2,ans};
    }
};