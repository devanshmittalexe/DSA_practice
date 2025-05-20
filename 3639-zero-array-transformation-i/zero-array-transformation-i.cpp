class Solution {
public:
    bool isZeroArray(vector<int>& nums, vector<vector<int>>& queries) {
        int n=nums.size();
        vector<int>a(n+1,0);
        a[0]=nums[0];
        for(int i=1;i<n;i++){
            a[i]=-nums[i-1]+nums[i];
        }
        int x,y;
        for(auto &i:queries){
            x=i[0];
            y=i[1];
            a[x]--;
            a[y+1]++;
        }
        for(int i=1;i<n;i++){
            a[i]=a[i-1]+a[i];
            if(a[i]>0) return 0;
        }
        return a[0]>0?0:1;
    }
};