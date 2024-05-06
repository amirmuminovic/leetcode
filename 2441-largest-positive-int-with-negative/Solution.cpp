class Solution {
public:
    int findMaxK(vector<int>& nums) {
        unordered_set<int> negatives;

        for (int i: nums) {
            if (i < 0) {
                negatives.insert(i);
            }
        }

        int max = -1;
        for (int i: nums) {
            if (i > 0 && negatives.count(-1 * i) > 0 && i > max) {
                max = i;
            }
        }

        return max;
    }
};
