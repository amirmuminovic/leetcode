class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int,int> m;

        for (int x: arr) {
            if (m.count(x) == 0) {
                m[x] = 1;
            } else {
                ++m[x];
            }
        }

        map<int,bool> uniques;
        for (auto it = m.begin(); it != m.end(); ++it) {
            if (uniques[m[it->first]]) {
                return false;
            } else {
                uniques[m[it->first]] = true;
            }
        }



        return true;
    }
};