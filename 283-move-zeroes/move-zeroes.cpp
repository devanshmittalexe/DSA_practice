// updated code
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int p1=-1,p2=0,n=nums.size();
        queue<int>a;
        for(int i=0;i<n;i++){
            if(nums[i]==0) a.push(i);
            else if(a.size()>0){
                swap(nums[i],nums[a.front()]);
                a.pop();
                a.push(i);
            }
        }
    }
};