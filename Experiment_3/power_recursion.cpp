// Problem: Find power m of number N using recursion.\n\n#include <iostream>

using namespace std;

long long power(int n, int m) {
    if (m == 0) return 1;
    return n * power(n, m - 1);
}

int main() {
    int N = 2, m = 5;
    cout << N << "^" << m << " = " << power(N, m) << endl;
    return 0;
}
