// Problem: Count the number of words in a string.\n\n#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int countWords(string str) {
    stringstream s(str);
    string word;
    int count = 0;
    while (s >> word) count++;
    return count;
}

int main() {
    string s = "Hello world this is C++";
    cout << "Word count: " << countWords(s) << endl;
    return 0;
}
