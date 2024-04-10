#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int maxSubarraySum(vector<int>& arr) {
    int max_ending_here = 0;
    int max_so_far = 0;

    for (int num : arr) {
        max_ending_here = max(0, max_ending_here + num);
        max_so_far = max(max_so_far, max_ending_here);
    }

    return max_so_far;
}

int main() {
    vector<int> arr = { -2, 11, -4, 13, -5, -2 };
    cout << "最大子段和: " << maxSubarraySum(arr) << endl;

    return 0;
}