class Solution {
public:
    int firstUniqChar(string s) {
        map<char, int> mapy;
        for (int i = 0; i < s.length(); ++i) {
            if (mapy.count(s[i]) > 0) {
                ++mapy[s[i]];
            } else {
                mapy[s[i]] = 1;
            }
        }

        for (int i =0; i< s.length(); ++i) {
            if (mapy[s[i]] == 1) {
                return i;
            }
        }

        return -1;
    }
};
