class Solution {
public:
    int mostFrequent(vector<int>& nums, int key) {
        unordered_map<int,int>a;
        int x,y=0;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]==key){
                a[nums[i+1]]++;
                if(a[nums[i+1]]>y){
                    y=a[nums[i+1]];
                    x=nums[i+1];
                }
            }
        }
        return x;
    }
};