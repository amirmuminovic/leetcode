class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        vector<int> freq = vector<int>(nums.size()+1);

        vector<vector<int>> ans;
        for (int x: nums) {
            if (freq[x] >= ans.size()) {
                ans.push_back({});
            }
            ans[freq[x]].push_back(x);
            ++freq[x];
        }

        return ans;
    }
};