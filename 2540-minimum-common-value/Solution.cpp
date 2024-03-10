class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        int res = -1;

        int highLimit = nums1.size() > nums2.size() ? nums1.size() : nums2.size();
        int firstArrayIndex = 0;
        int secondArrayIndex = 0;

        while (firstArrayIndex < nums1.size() && secondArrayIndex < nums2.size()) {
            if (nums1[firstArrayIndex] < nums2[secondArrayIndex]) {
                ++firstArrayIndex;
            } else if (nums1[firstArrayIndex] > nums2[secondArrayIndex]) {
                ++secondArrayIndex;
            } else {
                return nums1[firstArrayIndex];
            }
        }

        return -1;
    }
};