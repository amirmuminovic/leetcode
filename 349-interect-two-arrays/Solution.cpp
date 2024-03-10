class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        map<int,bool> n1;
        for (int x: nums1) {
            n1[x] = true;
        }

        vector<int> result;
        map<int,bool> n2;
        for (int x: nums2) {
            if (n1[x] && !n2[x]) {
                n2[x] = true;
                result.push_back(x);
            }
        }

        return result;
    }
};