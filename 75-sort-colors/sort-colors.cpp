// SOLUTION WITHOUT USING ANY EXTRA SPACE AND ONLY ONE ITERATION
// FIRST DID USING RECURSION AND THEN TRIED TO USE WHILE LOOP TRYING TO REDUCE MEMORY BUT NOT MUCH EFFECT
class Solution {
public:
    // void solve(vector<int>&nums,int p1,int p2,int p3){
    //     if(p2>=p3) return;
    //     if(nums[p1]==0 &&nums[p3]==2){
    //         solve(nums,p1+1,p2=p1+1,p3-1);
    //         return;
    //     }
    //     if(nums[p1]==2 &&nums[p3]==0){
    //         swap(nums[p1],nums[p3]);
    //         solve(nums,p1+1,p2=p1+1,p3-1);
    //         return;
    //     }
    //     if(nums[p2]==2){
    //         swap(nums[p2],nums[p3]);
    //         solve(nums,p1,p2,p3-1);
    //         return;
    //     }
    //     if(nums[p2]==0){
    //         swap(nums[p1],nums[p2]);
    //         if(nums[p2]==1) solve(nums,p1+1,p2+1,p3);
    //         else if(p2==p1) solve(nums,p1+1,p2=p1+1,p3);
    //         else solve(nums,p1+1,p2,p3);
    //         return;
    //     }
    //     if(nums[p3]==0){
    //         swap(nums[p1],nums[p3]);
    //         solve(nums,p1+1,p2=p1+1,p3);
    //         return;
    //     }
    //     if(nums[p3]==2){
    //         solve(nums,p1,p2,p3-1);
    //         return;
    //     }
    //     else if(p2<p3) solve(nums,p1,p2+1,p3);

    // }
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
        // solve(nums,p1,p2,p3);
        while(p2<p3){
            // cout<<p1<<" "<<p2<<" "<<p3<<endl;
            // for(auto &i:nums) cout<<i<<" ";
            // cout<<endl;
            if(nums[p1]==0 &&nums[p3]==2){
                p1+=1;
                p2=p1;
                p3-=1;
                // solve(nums,p1+1,p2=p1+1,p3-1);
                // return;
                // cout<<"1"<<endl;
            }
            else if(nums[p1]==2 &&nums[p3]==0){
                swap(nums[p1],nums[p3]);
                p1+=1;
                p2=p1;
                p3-=1;
                // solve(nums,p1+1,p2=p1+1,p3-1);
                // return;
            }
            else if(nums[p2]==2){
                swap(nums[p2],nums[p3]);
                p3-=1;
                // solve(nums,p1,p2,p3-1);
                // return;
            }
            else if(nums[p2]==0){
                swap(nums[p1],nums[p2]);
                if(nums[p2]==1){
                    p1+=1;
                    p2+=1;
                    // solve(nums,p1+1,p2+1,p3);
                }
                else if(p2==p1){
                    p1+=1;
                    p2=p1;
                    // solve(nums,p1+1,p2=p1+1,p3);
                }
                else{
                    p1+=1;
                    // solve(nums,p1+1,p2,p3);
                }
                // return;
            }
            else if(nums[p3]==0){
                swap(nums[p1],nums[p3]);
                p1+=1;
                p2=p1;
                // solve(nums,p1+1,p2=p1+1,p3);
                // return;
            }
            else if(nums[p3]==2){
                p3-=1;
                // solve(nums,p1,p2,p3-1);
                // return;
            }
            else if(p2<p3){
                p2+=1;
                // solve(nums,p1,p2+1,p3);
            } 
        }
    }
};