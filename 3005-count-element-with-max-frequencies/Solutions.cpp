class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        map<int, int> counts;
        int max = 1;
        
        for (int i = 0; i < nums.size(); ++i) {
            if (counts.count(nums[i]) > 0) {
                ++counts[nums[i]];

                if (max < counts[nums[i]]) {
                    max = counts[nums[i]];
                }
            } else {
                counts[nums[i]] = 1;
            }
        }

        int res = 0;
        for (pair<int, int> p: counts) {
            if (p.second == max) {
                res += max;
            }
        }

        return res;
    }
};