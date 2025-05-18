class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int>a;
        for(auto &i:s) a[i]++;
        vector<pair<char,int>>b;
        for(auto &[i,j]:a){
            b.push_back({i,j});
        }
        sort(b.begin(),b.end(),[](const auto &a,const auto &b){
            return a.second>b.second;
        });
        s.clear();
        for(auto &i:b){
            s+=string(i.second,i.first);
        }
        return s;
    }
};