// Problem: Leftmost repeating character in string.\n\n#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

char leftmostRepeating(string s) {
    unordered_map<char, int> count;
    for (char c : s) count[c]++;
    for (char c : s) {
        if (count[c] > 1) return c;
    }
    return '-'; // Denoting -1
}

int main() {
    cout << "Leftmost repeating: " << leftmostRepeating("geeksforgeeks") << endl;
    return 0;
}
