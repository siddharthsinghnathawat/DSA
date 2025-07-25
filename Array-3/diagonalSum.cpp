#include <iostream>
#include <vector>
using namespace std;

vector<int> diagonalt(const vector<vector<int>>& matrix) {
    int sum = 0;
    vector<int> ans;
    int n = matrix.size();
    for (int i = 0; i < n; i++) {
        sum += matrix[i][i];               // primary diagonal
        sum += matrix[i][(n - 1) - i];    // secondary diagonal
    }

    // Avoid double counting the middle element in odd-sized matrix
    if (n % 2 == 1) {
        sum -= matrix[n / 2][n / 2];
    }

    ans.push_back(sum);
    return ans;
}

int main() {
    vector<vector<int>> matrix{{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    vector<int> result = diagonalt(matrix);  // <-- vector<int> here

    for (int i : result) {
        cout << i << endl;
    }

    return 0;
}
