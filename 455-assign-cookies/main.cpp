class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int cookie_count = 0;
        sort(g.begin(), g.end(), greater<int>());
        sort(s.begin(), s.end(), greater<int>());

        int i = 0;
        int j = 0;

        while (i < g.size() && j < s.size()) {
            if (g[i] > s[j]) {
                ++i;
            } else {
                ++cookie_count;
                ++i;
                ++j;
            }
        }
        

        return cookie_count;
    }
};