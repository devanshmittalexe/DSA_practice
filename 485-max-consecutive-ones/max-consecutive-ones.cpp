class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int p1=-1,p2=-1,n=nums.size();
        int m=0;
        for(int i=0;i<n;i++){
            if(nums[i]==1){
                if(p1==-1){
                    p1=i;
                    p2=i;
                }
                else p2++;
                m=max(m,(p2-p1+1));
            }
            else{
                p1=-1;
                p2=-1;
            }
        }
        return m;
    }
};