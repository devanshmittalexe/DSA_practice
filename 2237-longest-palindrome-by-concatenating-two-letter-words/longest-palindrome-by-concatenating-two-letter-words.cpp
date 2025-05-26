class Solution {
public:
    int longestPalindrome(vector<string>& words) {
        unordered_map<string, int> mp;
        int ans = 0;
        bool hasCenter = false;

        for (const string& word : words) {
            string rev = word;
            swap(rev[0], rev[1]);

            if (mp[rev] > 0) {
                mp[rev]--;
                ans += 4;
            } else {
                mp[word]++;
            }
        }

        for (const auto& [word, count] : mp) {
            if (word[0] == word[1] && count > 0) {
                ans += 2;
                break;
            }
        }

        return ans;
    }
};
