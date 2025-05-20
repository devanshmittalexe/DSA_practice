class Solution {
public:
    int bulbSwitch(int n) {
        int bc=0,t;
        // for(int i=1;i<=n;i++){
        //     t=sqrt(i);
        //     if(t*t==i) bc++;
        // }
        for(int i=1;i*i<=n;i++) bc++;
        return bc;
    }
};