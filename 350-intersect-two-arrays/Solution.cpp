class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> o1;

        for (int x: nums1) {
            ++o1[x];
        }

        vector<int> res;

        for (int x: nums2) {
            if (o1[x] > 0) {
                res.push_back(x);
                --o1[x];
            }
        }

        return res;
    }
};