// optimal solution no doing all the simulation
class Solution {
public:
    int arraySign(vector<int>& nums) {
        int nc=0;
        for(auto &i:nums){
            if(i==0) return 0;
            if(i<0) nc++;
        }
        return (nc&1)?-1:1;
    }
};