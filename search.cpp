#include <iostream>
#include <vector>
using namespace std;

bool searchMat(vector<vector<int>> &matrix, int target) {
    if (matrix.empty()) {
        return false;
    }

    if (matrix[0].empty()) {
        return false;
    }

    int rows = matrix.size();
    int cols = matrix[0].size();

    int left = 0;
    int right = rows * cols - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        int row = mid / cols;
        int col = mid % cols;
        int value = matrix[row][col];

        if (value == target) {
            return true;
        } else if (value < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return false;
}

int main() {
    vector<vector<int>> matrix = {
        {1, 3, 5, 7},
        {10, 11, 16, 20},
        {23, 30, 34, 60}
    };

    cout << boolalpha;
    cout << searchMat(matrix, 3) << endl;
    cout << searchMat(matrix, 13) << endl;

    return 0;
}