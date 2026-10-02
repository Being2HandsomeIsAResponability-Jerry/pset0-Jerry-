#include <iostream>
#include <vector>
using namespace std;

vector<int> targetVector(vector<int> nums, vector<int> index) {
    vector<int> target;

    for (int i = 0; i < nums.size(); i++) {
        target.insert(target.begin() + index[i], nums[i]);
    }

    return target;
}

int main() {
    vector<int> nums = {0, 1, 2, 3, 4};
    vector<int> index = {0, 1, 2, 2, 1};

    vector<int> result = targetVector(nums, index);

    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }

    cout << endl;

    return 0;
}