//
// Created by Amir Muminovic on 10. 12. 2023..
//

#include <iostream>
#include <vector>

using  namespace  std;

class Solution {
 public:
  vector<vector<int>> transpose(vector<vector<int>>& matrix) {
    vector<vector<int>> transposed_matrix;

    int m = matrix.size();
    int n = matrix[0].size();

    for (int i = 0; i < n; ++i) {
      vector<int> row(m);
      for (int j = 0; j < m; ++j) {
        row[j] = matrix[j][i];
      }
      transposed_matrix.push_back(row);
    }

    return transposed_matrix;
  }
};

int main() {
  vector<vector<int>> input{
      vector<int>{1, 2, 3},
      vector<int>{4, 5, 6},
      vector<int>{7, 8, 9},
  };

  Solution *p_solution = new Solution();
  vector<vector<int>> output = p_solution->transpose(input);

  vector<vector<int>> expected_output{
      vector<int>{1, 4, 7},
      vector<int>{2, 5, 8},
      vector<int>{3, 6, 9},
  };

  for (int i = 0; i < expected_output.size(); ++i) {
    for (int j = 0; j < expected_output[0].size(); ++j) {
      if (expected_output[i][j] != output[i][j]) {
        cout << "Expected and actual output do not match." << endl;
        cout << "Value " << expected_output[i][j] << " expected but received " << output[i][j] << "." << endl;
        cout << "Inconsistency for index [" << i << ", " << j << "]" << endl;
        return 1;
      }
    }
  }

  delete p_solution;

  return 0;
}