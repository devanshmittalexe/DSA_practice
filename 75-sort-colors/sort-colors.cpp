class Solution {
public:
    void sortColors(vector<int>& nums) {
        int p1,p2,p3;
        int n=nums.size();
        if(n==1) return;
        if(n==2){
            if(nums[0]>nums[1]) swap(nums[0],nums[1]);
            return;
        }
        p1=p2=0;
        p3=n-1;
        while(p2<p3){
            if(nums[p1]==0 &&nums[p3]==2){
                p1+=1;
                p2=p1;
                p3-=1;
            }
            else if(nums[p1]==2 &&nums[p3]==0){
                swap(nums[p1],nums[p3]);
                p1+=1;
                p2=p1;
                p3-=1;
            }
            else if(nums[p2]==2){
                swap(nums[p2],nums[p3]);
                p3-=1;
            }
            else if(nums[p2]==0){
                swap(nums[p1],nums[p2]);
                if(nums[p2]==1){
                    p1+=1;
                    p2+=1;
                }
                else if(p2==p1){
                    p1+=1;
                    p2=p1;
                }
                else{
                    p1+=1;
                }
            }
            else if(nums[p3]==0){
                swap(nums[p1],nums[p3]);
                p1+=1;
                p2=p1;
            }
            else if(nums[p3]==2){
                p3-=1;
            }
            else if(p2<p3){
                p2+=1;
            } 
        }
    }
};