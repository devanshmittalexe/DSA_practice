// brute force
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        k=k%n;
        if(k<n){
            vector<int>a;
            for(int i=n-k;i<n;i++) a.push_back(nums[i]);
            for(int i=0;i<n-k;i++) a.push_back(nums[i]);
            nums=a;
        }
    }
};