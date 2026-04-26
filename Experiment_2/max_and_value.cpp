// Problem: Find Maximum AND value produced by pairwise element from array.\n\n#include <iostream>
#include <vector>

using namespace std;

// This can be optimized, but using O(N^2) for simplicity according to practical requirements
int maxAND(vector<int>& arr) {
    int max_val = 0;
    for (int i = 0; i < arr.size(); i++) {
        for (int j = i + 1; j < arr.size(); j++) {
            max_val = max(max_val, arr[i] & arr[j]);
        }
    }
    return max_val;
}

int main() {
    vector<int> arr = {4, 8, 12, 16};
    cout << "Max AND value: " << maxAND(arr) << endl;
    return 0;
}
