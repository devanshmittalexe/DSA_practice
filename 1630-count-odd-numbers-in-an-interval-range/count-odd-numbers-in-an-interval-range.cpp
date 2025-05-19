class Solution {
public:
    int countOdds(int low, int high) {
        int no=high-low+1;
        if(no&1){
            no/=2;
            if(low&1) return no+1;
            return no;
        }
        return no/2;
    }
};