class Solution {
public:
    string triangleType(vector<int>& n) {
        int a=n[0],b=n[1],c=n[2];
        if(a+b<=c || b+c<=a || a+c<=b) return "none";
        if(a==b && b==c) return "equilateral";
        if(a==b || b==c ||a==c) return "isosceles";
        return "scalene";
    }
};