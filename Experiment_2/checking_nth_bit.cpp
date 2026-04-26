// Problem: Check if nth bit is set.\n\n#include <iostream>

using namespace std;

bool isNthBitSet(int N, int n) {
    return (N & (1 << n)) != 0;
}

int main() {
    int N = 5; // Binary: 101
    int n = 0; // Check 0th bit
    if (isNthBitSet(N, n)) {
        cout << n << "th bit is SET" << endl;
    } else {
        cout << n << "th bit is CLEAR" << endl;
    }
    return 0;
}
