class Solution {
public:
    int amountOfTime(TreeNode* root, int start) {
        map<int, vector<int>> m;
        map<int, bool> visited;

        queue<TreeNode*> q;
        q.push(root);
        m[root->val] = vector<int>();

        while (!q.empty()) {
            TreeNode* tn = q.front();
            q.pop();
            int currentValue = tn->val;

            if (tn->right) {
                int rightValue = tn->right->val;
                m[currentValue].push_back(rightValue);
                visited[rightValue] = false;
                m[rightValue] = vector<int>{currentValue};
                q.push(tn->right);
            }
            
            if (tn->left) {
                int leftValue = tn->left->val;
                m[currentValue].push_back(leftValue);
                visited[leftValue] = false;
                m[leftValue] = vector<int>{currentValue};
                q.push(tn->left);
            }
        }

        queue<pair<int, int>> nodes;
        nodes.push(pair<int,int>(start, 0));
        int lastDist = 0;
        visited[start] = true;
        while (!nodes.empty()) {
            int current = nodes.front().first;
            int distance = nodes.front().second;

            nodes.pop();

            for (auto it = m[current].begin(); it != m[current].end(); ++it) {
                if (!visited[*it]) {
                    visited[*it] = true;
                    lastDist = distance + 1;
                    nodes.push(pair<int,int>{*it, distance + 1});
                }
            }
        }

        return lastDist;
    }
};