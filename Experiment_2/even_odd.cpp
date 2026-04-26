// Problem: Check whether number is even or odd using bitwise & operator.\n\n#include <iostream>

using namespace std;

int main() {
    int N = 15;
    if (N & 1) {
        cout << N << " is Odd" << endl;
    } else {
        cout << N << " is Even" << endl;
    }
    return 0;
}
