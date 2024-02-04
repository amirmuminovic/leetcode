class Solution {
public:
    string removeTrailingZeros(string num) {
        int offset = 0;

        for (int i = num.size() - 1; i >= 0; --i) {
            if (num[i] == '0') {
                offset++;
            } else {
                break;
            }
        }
        return num.substr(0, num.size()-offset);
    }
};