class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        set<int> s;
        int s1 = 0;
        int s2 = (nums.size() * (nums.size() + 1) )/ 2;
        int target = 0;
        for (int i = 0; i < nums.size(); ++i) {
            if (s.count(nums[i]) == 0) {
                s.insert(nums[i]);
            } else {
                target = nums[i];
            }
            s1 += nums[i];
        }
        int res = abs(s1 - s2 - target);

        return vector<int>{target, res};
    }
};
