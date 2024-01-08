class Solution {
private:
    int checkIfDecompositionPossible(int n) {
        int ops = 0;
        while (n > 0) {
            if (n % 3 == 0 || n % 2 == 1) {
                n -= 3;
            } else {
                n -= 2;
            }
            ++ops;
        }

        return n == 0 ? ops : -1;
    }
public:
    int minOperations(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        int i = 0;
        int nOps = 0;
        int candidate = nums[i];
        int count = 1;
        ++i;
        while (i < nums.size()) {
            if (nums[i] == candidate) {
                ++count;
            } else {
                int ops = this->checkIfDecompositionPossible(count);
                if (ops < 0) {
                    return -1;
                } else {
                    nOps += ops;
                }
                candidate = nums[i];
                count = 1;
            }
            ++i;
        }
        if (count > 0) {
            int ops = this->checkIfDecompositionPossible(count);
            if (ops < 0) {
                return -1;
            } else {
                nOps += ops;
            }
        }

        return nOps;
    }
};