class Solution {
public:
    string frequencySort(string s) {
        map<char,int>a;
        for(auto &i:s) a[i]++;
        vector<pair<char,int>>b;
        s.clear();
        for(auto &[i,j]:a){
            b.push_back({i,j});
        }
        sort(b.begin(),b.end(),[](const auto &a,const auto &b){
            return a.second>b.second;
        });
        for(auto &i:b){
            while(i.second--) s+=i.first;
        }
        return s;
    }
};