// optimized code order of n time complexity;
// the real question is find how many total no of perfect squeares are present in a given range;
class Solution {
public:
    int bulbSwitch(int n) {
        int bc=0;
        for(int i=1;i*i<=n;i++) bc++;
        return bc;
    }
};