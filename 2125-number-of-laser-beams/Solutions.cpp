class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int result = 0;
        int previous = 0;
        int current = 0;
        for (string b: bank){
            int count = 0;
            for (char c: b) {
                if (c == 49) {
                    ++count;
                }
            }
            if (count > 0) {
                previous = current;
                current = count;
                if (previous > 0 && current > 0) {
                    result += previous * current;
                }
            }
        }

        return result;
    }
};