// most optimized solution
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        reverse(nums.begin(),nums.end());
        int n=nums.size();
        k=k%n;
        int p1=0,p2=k-1,p3=k,p4=n-1;
        while(p1<p2){
            swap(nums[p1],nums[p2]);
            p1++;
            p2--;
        }
        while(p3<p4){
            swap(nums[p3],nums[p4]);
            p3++;
            p4--;
        }
    }
};